#include <iostream>
#include <cstring>
using namespace std;

int pd[2][1000000];

int main()
{
    int n, valor[1000000], peso[1000000], capacidade;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> valor[i] >> peso[i];
    cin >> capacidade;
    memset(pd[0], 0, sizeof(int)*capacidade);
    int p = 0;
    for (int i = 0; i < n; ++i)
    {
        pd[p^1][0] = 0;
        for (int j = 1; j <= capacidade; ++j)
        {
            if (j >= peso[i])
                pd[p^1][j] = max(pd[p^1][j - peso[i]] + valor[i], pd[p][j]);
            else
                pd[p^1][j] = pd[p][j];
        }
        p ^= 1;
        for (int j = 0; j <= capacidade; ++j)
            cout << pd[p][j] << ' ';
        cout << endl;
    }
}

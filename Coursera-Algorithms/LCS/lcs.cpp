#include <iostream>
#include <cstring>
using namespace std;

string s1, s2;
int pd[2][1000000];

int main()
{
    cin >> s1 >> s2;
    int pmax = 0;
    if (s2.size() < s1.size())
        swap(s1, s2);
    memset(pd[0], 0, sizeof(int)*s1.size());
    int p = 0;
    for (int i = 1; i <= s2.size(); ++i)
    {
        for (int j = 1; j <= s1.size(); ++j)
        {
            if(s1[j-1] == s2[i-1])
                pd[p^1][j] = 1 + pd[p][j-1];
            else
                pd[p^1][j] = max(pd[p^1][j-1], pd[p][j]);
        }
        p ^=1;
        for (int j = 0; j <= s1.size(); ++j)
            cout << pd[p][j] << ' ';
        cout << endl;

    }
    string ans = "";
    int lcs_len = pd[p][s1.size()];
    for (int i = s1.size(); i >= 0; --i)
    {
        if (pd[p][i] < lcs_len)
        {
            ans = s1[i] + ans;
            lcs_len--;
        }
    }
    cout << ans << endl;

}

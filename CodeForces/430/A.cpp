#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#define EPS 0.0000000000000001
#define fori(N) for(i = 0; i < N; ++i)
#define forid(N) for(int i = 0; i < N; ++i)
#define forj(N) for(j = 0; j < N; ++j)
#define forjd(N) for(int j = 0; j < N; ++j)

using namespace std;

int main()
{
    int x, y, color[1000], ptos[1000], n, m;
    int ptosn[1000];
    vector<pair<int, int> > seg;
    map<int, int> mapa;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> ptos[i];
        ptosn[i] = ptos[i];
    }
    sort(ptos, ptos+n);
    for (int i = 0; i < m; ++i)
        cin >> x >> y;
    bool alter = false;
    for (int i = 0; i < n; ++i)
    {
        mapa[ptos[i]] = alter;
        alter = !alter;
    }
    for (int i = 0; i < n; ++i)
        cout << mapa[ptosn[i]] << ' ';
    cout << endl;
}


#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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

vector<int> inv;
vector<int>    arvb[100001];
vector<int>    arv[100001];
bool           varv[100001];
bool           narv[100001];
bool       visitedi[100001];
bool       visited [100001];
int n;

void dfs(int v, bool invert, bool flag)
{
    //cout << "VISIT: " << v << endl;
    if (invert)
        varv[v] = !varv[v];
    if (varv[v] != narv[v])
    {
        inv.push_back(v);
        for (int i = 0; i < arv[v].size(); ++i)
            dfs(arv[v][i], flag, invert ^ 1);
    }
    else
    {
        for (int i = 0; i < arv[v].size(); ++i)
            dfs(arv[v][i], flag, invert);
    }
}


void dfs2(int v)
{
    if (visited[v])
        return;
    visited[v] = true;
    for (int i = 0; i < arvb[v].size(); ++i)
    {
        if (!visited[arvb[v][i]])
        {
            arv[v].push_back(arvb[v][i]);
            dfs2(arvb[v][i]);
        }
    }
}

int main()
{
    int a, b;
    cin >> n;
    memset(visited, 0, n);
    for (int i = 1; i < n; ++i)
    {
        cin >> a >> b;
        arvb[a].push_back(b);
        arvb[b].push_back(a);
    }
    dfs2(1); 
    for(int i = 1; i <= n; ++i)
        cin >> varv[i];
    for(int i = 1; i <= n; ++i)
        cin >> narv[i];
    dfs(1, 0, 0);
    cout << inv.size() << endl;
    for (int i = 0; i < inv.size(); ++i)
        cout << inv[i] << ' ' << endl;
}


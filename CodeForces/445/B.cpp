#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <list>
#include <algorithm>
#include <map>
#include <set>
#define EPS 0.0000000000000001
#define fori(N) for(i = 0; i < N; ++i)
#define forid(N) for(int i = 0; i < N; ++i)
#define forj(N) for(j = 0; j < N; ++j)
#define forjd(N) for(int j = 0; j < N; ++j)

using namespace std;

int gcd(int a, int b) {return (b = 0 ? a : gcd(b, a%b));}
int lcm(int a, int b) {return (a * (b / gcd(a, b))); }

struct pto
{
	double x;
	double y;
	pto(){}
	pto(double _x, double _y){ x = _x; y = _y;}
};

vector<int> gr[10000];
bool vis[10000];

int cc;
void dfs(int p)
{
    if (vis[p])
        return;
    vis[p] = true;
    for (int i = 0; i < gr[p].size(); ++i)
    {
        if (!vis[gr[p][i]])
            dfs(gr[p][i]);
    }
}

int main()
{
    int n, m;
    int a,b;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        vis[i] = false;
    forid(m)
    {
        cin >> a >> b;
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    int maxa = 0;
    int comp = 0;
    for(int i = 1; i <= n; ++i)
    {
        if (!vis[i])
        {
            ++comp;
            dfs(i);
        }
    }
    unsigned long long ma = 2;
    if (n - comp == 0)
        ma = 1;
    else
        ma <<= (n - comp-1);
    cout << ma << endl;
}

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

int gcd(int a, int b) {return (b = 0 ? a : gcd(b, a%b));}
int lcm(int a, int b) {return (a * (b / gcd(a, b))); }

vector<pair<int, double> >graph[100000];

struct pto
{
	double x;
	double y;
	pto(){}
	pto(double _x, double _y){ x = _x; y = _y;}
};

int parent[100000];

int find(int i)
{
	if (parent[i] == -1)
		return i;
	return find(parent[i]);
}

void un(int x, int y)
{
	int xn = find(x);
	int yn = find(y);
	parent[xn] = yn;
}

vector<pair<double, pair<int, int> > > g;

int main()
{
	vector<int> mst[100000];
	int a, b, n;
	double p;
	cin >> n;
	for (int i = 0; i < n; ++i)
		parent[i] = -1;
	while(cin >> a >> b >> p)
	{
		g.push_back(make_pair(p, make_pair(a, b)));
	}
	sort(g.begin(), g.end());
	for (int i = 0; i < g.size(); ++i)
	{
		int x = find(g[i].second.first);
		int y = find(g[i].second.second);
		if (x != y)
		{
			cout << g[i].second.first << ' ' << (g[i].second.second) << endl;
			un(x, y);
		}
	}
}





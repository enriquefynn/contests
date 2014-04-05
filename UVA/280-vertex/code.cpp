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

struct pto
{
	double x;
	double y;
	pto(){}
	pto(double _x, double _y){ x = _x; y = _y;}
};

map<int, bool> visited;
vector<int> graph[500];

void dfs(int no)
{
	for (int i = 0; i < graph[no].size(); ++i)
	{
		if (!visited[graph[no][i]])
		{
			visited[graph[no][i]] = true;
			dfs(graph[no][i]);
		}
	}
}

main()
{
	int n;
	while(1)
	{
		int p, h, j;
		cin >> n;
		if (!n) 
			break;
		for (int i = 1; i <= n; ++i)
			graph[i].clear();
		while (1)
		{
			cin >> p;
			if (!p)
				break;
			while(1)
			{
				cin >> j;
				if (!j)
					break;
				graph[p].push_back(j);
			}
		}
		cin >> p;
		for (int i = 0; i < p; ++i)
		{
			vector<int> nv;
			for (int o = 1; o <= n; ++o)
				visited[o] = false;
			cin >> j;
			dfs(j);
			for (int k = 1; k <= n; ++k)
				if (!visited[k])
					nv.push_back(k);
			cout << nv.size();
			if (nv.size()) 
			{
				cout << ' ';
				for (int k = 0; k < nv.size()-1; ++k)
					cout << nv[k] << ' ';
				cout << nv[nv.size()-1];
			}
			cout << endl;
		} 
	}
}











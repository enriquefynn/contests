#include <iostream>
#include <cstring>
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
int visited[200];
vector<int> graph[200];
bool hasLoop;
bool dfs(int node, int c)
{
	visited[node] = c;
	for (int i = 0; i < graph[node].size(); ++i)
			if (visited[graph[node][i]] == c)
				return false;
			else if (visited[graph[node][i]] == -1)
				if (!dfs(graph[node][i], !c))
					return false;
	return true;
}

main()
{
	int n, p, x,y;
	while(1)
	{
		cin >> n;
		if (!n)
			break;
		for (int i = 0; i < n; ++i)
		{
			visited[i] = -1;
			graph[i].clear();
		}
		cin >> p;
		while(p--)
		{
			cin >> x >> y;
			graph[x].push_back(y);
			graph[y].push_back(x);
		}
		hasLoop = dfs(0, 0);
		if (hasLoop)
			cout << "BICOLORABLE.\n";
		else
			cout << "NOT BICOLORABLE.\n";
	}
	return 0;
}















#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <bitset>
#include <stack>
#define EPS 0.0000000000000001
#define fori(N) for(i = 0; i < N; ++i)
#define forid(N) for(int i = 0; i < N; ++i)
#define forj(N) for(j = 0; j < N; ++j)
#define forjd(N) for(int j = 0; j < N; ++j)

using namespace std;

int gcd(int a, int b) {return (b = 0 ? a : gcd(b, a%b));}
int lcm(int a, int b) {return (a * (b / gcd(a, b))); }

vector<int> graph[100000];
vector<int> graphi[100000];

int parent[100000];
bitset<10000> bs;
stack<int> s;

void dfs(int v)
{
	bs[v] = true;
	for (int i = 0; i < graphi[v].size(); ++i)
	{
		if (!bs[graphi[v][i]])
			dfs(graphi[v][i]);
	}
	s.push(v);
}

map<int, set<int> > mcomp;

void dfs2(int v, int c)
{
	bs[v] = true;
	for (int i = 0; i < graph[v].size(); ++i)
	{
		if (!bs[graph[v][i]])
			dfs2(graph[v][i], c);
	}
	mcomp[c].insert(v);
}


int main()
{
	int a, b, n;
	double p;
	while(cin >> n)
	{
	for (int i = 0; i < n; ++i)
	{
		graph[i].clear();
		graphi[i].clear();
	}
	mcomp.clear();
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		graphi[b].push_back(a);
		graph[a].push_back(b);
	}
	bs = 0;
	for (int i = 0; i < n; ++i)
	{
		if (!bs[i] && graphi[i].size() > 0)
			dfs(i);
	}
	int c = -1;
	bs = 0;
	while(!s.empty())
	{
		if (!bs[s.top()])
		{
			++c;
			dfs2(s.top(), c);
		}
		s.pop();
	}
	for (map<int, set<int> >::iterator it = mcomp.begin(); it != mcomp.end(); ++it)
	{
		cout << it->first << ": ";
		for (set<int>::iterator it2 = it->second.begin(); it2 != it->second.end(); ++it2)
			cout << *it2 << ' ';
		cout << endl;
	}
	cout << endl;
	}
}





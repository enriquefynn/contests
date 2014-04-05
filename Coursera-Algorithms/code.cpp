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

vector<pair<int, double> graph[100000];

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

void union(int x, int y)
{
	int xn = find(x);
	int yn = find(y);
	parent[xn] = yn;
}

int main()
{
	vector<int> mst[100000];
	int a, b, n;
	double p;
	cin >> n;
	fori(n)
		parent[i] = -1;
	while(cin >> a >> b >> p)
	{
		graph[a].push_back(make_pair(b, p));
		graph[b].push_back(make_pair(a, p));
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < graph[i].size(); ++j)
		{
			int x = find(i);
			int y = find(graph[i][j]);
			if (x != y)
			{
				mst[x].push_back(graph[i][j]);
				union(x, y);
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << i << "- ";
		for (int j = 0; j < mst[i].size(); ++j)
			cout << mst[i][j] << ' ';
		cout << endl;
	}
	
}





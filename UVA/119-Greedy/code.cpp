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

main()
{
	map<string, int> m;
	string names[10000];
	int n, p, N;
	string s;
	bool first = true;
	while(cin >> n)
	{
		if (!first)
			cout << endl;
		if (first) first = false;
		m.clear();
		for (int i = 0; i < n; ++i)
		{
			cin >> s;
			names[i] = s;
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> s >> p >> N;
			if (N)
			{	
				m[s]-=p;
				m[s] += p%N;
			}
			for (int j = 0; j < N; ++j)
			{
				cin >> s;
				m[s]+= (p/N);
			}
		}
		for (int i = 0; i < n; ++i)
			cout << names[i] << ' ' << m[names[i]] << endl;
	}
}




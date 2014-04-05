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
	string s;
	int p, cas, x, y;
	bool is;
	cas = 1;
	while(cin >> s)
	{
		cin >> p;
		cout << "Case " << cas++ << ":\n";
		for (int i = 0; i < p; ++i)
		{
			cin >> x >> y;
			is = true;
			if (x > y)
				swap(x, y);
			char c = s[x];
			for (int j = x; j <=y; ++j)
				if (c != s[j])
				{
					is = false;
					break;
				}
			if (is)
				cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
	return 0;
}

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <bitset>
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

bitset<10000> bs;
main()
{
	int k, m, tmp, n, mi;
	bool flag;
	while(cin >> k >> m, k)
	{
		bs = 0;
		flag = true;
		for (int i = 0; i < k; ++i)
		{
			cin >> tmp;
			bs[tmp] = true;
		}
		for (int i = 0; i < m; ++i)
		{
			cin >> n >> mi;
			int mmin = 0;
			for (int j = 0; j < n; ++j)
			{
				cin >> tmp;
				if (bs[tmp])
					++mmin;
			}
			if (mmin < mi)
				flag = false;
		}
		if (flag)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}

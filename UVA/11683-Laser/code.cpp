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
	bool flag;
	int h, n, p, l, k;
	while(cin >> h, h)
	{
		flag = false;
		cin >> n;
		cin >> p;
		l = h - p;
		int dif;
		for (int i = 1; i < n; ++i)
		{
			cin >> k;
			if (k < p)
				flag = true;
			else
				flag = false;
			if (flag)
				l+= p - k;
			p = k;
		}
		cout << l << endl;
	}
}












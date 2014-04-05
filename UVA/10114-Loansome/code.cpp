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
	double d, l, curr, car, de;
	int dep, m, mon, n;
	map<int, double> depre;
	while(1)
	{
		depre.clear();
		cin >> m;
		if (m < 0)
			break;
		cin >> d >> l >> dep;
		while(dep--)
		{
			cin >> n >> de;
			depre[n] = de;
		}
		curr = depre[0];
		car = (d + l) * (1. - curr);
		mon = 1;
		double montp = l/m;
		while(l > car)
		{
			if (depre[mon] != 0.)
				curr = depre[mon];
			car = car * (1 -curr);
			mon++;
			l-= montp;
		}
		cout << mon-1 << ((mon-1 == 1) ? " month" : " months") << endl;
	}
	return 0;
}






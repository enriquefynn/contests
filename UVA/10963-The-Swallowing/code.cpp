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
	int r1, r2, gap, p, n;
	cin >> n;
	bool flag;
	while(n--)
	{
		flag = true;
		cin >> p;
		cin >> r1 >> r2;
		p--;
		gap = abs(r1 - r2);
		while(p--)
		{
			cin >> r1 >> r2;
			if (abs(r1 - r2) != gap)
				flag = false;
		}
		if (flag)
			cout << "yes\n";
		else
			cout << "no\n";
		if (n)
			cout << endl;
	}
}









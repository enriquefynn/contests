#include <iostream>
#include <climits>
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
	int n, r, m, ma, aux;
	cin >> n;
	while(n--)
	{
		m = INT_MAX;
		ma = 0;
		cin >> r;
		for (int i = 0; i < r; ++i)
		{
			cin >> aux;
			if (aux < m)
				m = aux;
			if (aux > ma)
				ma = aux;
		}
		cout << 2*(ma-m) << endl;
	}
}

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

int main()
{
	int n, v, V;
	bool f;
	while(1)
	{
		f = false;
		cin >> n >> V;
		if (!n && !V)
			break;
		int aum;
		for (int j = V; j > 0; --j) {
		v = j;
		aum = 0;
		for (int i = v; i <= n; i+=v)
		{
			++aum;
			if (aum == v)
			{
				--v;
				aum = 0;
			}
			if (n == i)
			{
				f = true;
				goto end;
			}
			if (v == 0)
				break;
		}
		}
end:	if (f) cout << "possivel\n";
		else cout << "impossivel\n";
	}
		return 0;
}















#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
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
	int l, n, m;
	int desl[101];
	memset(desl, 0, 101*sizeof(int));
	cin >> n >> m;
	for (int i = 1; i <= m; ++i)
	{
		cin >> l;
		for (int j = l; j <= n; ++j)
		{
			if (!desl[j])
				desl[j] = l;
			else
				break;
		}
	}
	for (int i = 1; i <= n; ++i)
		cout << desl[i] << ' ';
	cout << endl;
}

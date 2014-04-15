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
	int n;
	long long x;
	char q;
	string s;
	cin >> n;
	long long int u = 2000000000;
	long long int l = -2000000000;
	while(n--)
	{
		cin >> s >> x >> q;
		if (s == ">")
		{
			if (q == 'Y')
				l = max(l, x+1);
			else
				u = min(u, x);
		}
		else if (s == ">=")
		{
			if (q == 'Y')
				l = max(l, x);
			else
				u = min(u, x-1);
		}
		else if (s == "<")
		{
			if (q == 'Y')
				u = min(u, x-1);
			else
				l = max(l, x);
		}
		else
		{
			if (q == 'Y')
				u = min(u, x);
			else
				l = max(l, x+1);
		}
	}
	if (l <= u) 
		cout << (l+u)/2 << endl;
	else
		cout << "Impossible\n";
}








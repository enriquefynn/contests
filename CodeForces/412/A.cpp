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
	int n, k, p, i;
	string s;
	cin >> n >> k >> s;
	if (n - k < k)
	{
		p = n-k;
		for (i = k; i < n; ++i)
			cout << "RIGHT\n";
		for (i = n - 1; i > 0; --i)
			cout << "PRINT " << s[i] << endl << "LEFT\n";
		cout << "PRINT " << s[i] << endl;
	}
	else
	{
		for (i = 1; i < k; ++i)
			cout << "LEFT\n";
		for (i = 0; i < n-1; ++i)
			cout << "PRINT " << s[i] << endl << "RIGHT\n";
		cout << "PRINT " << s[i] << endl;
	}
}

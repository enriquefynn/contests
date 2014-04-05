#include <iostream>
#include <cstring>
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
	int v[100], p, n, k, T;
	string s;
	cin >> T;
	while(T--)
	{
		p = 0;
		cin >> n;
		memset(v, 0, n* sizeof(int));
		int i = 0;
		while(n--)
		{
			cin >> s;
			if (s == "LEFT")
			{
				--p;
				v[i++] = -1;
			}
			else if (s == "RIGHT")
			{
				++p;
				v[i++] = 1;
			}
			else
			{
				cin >> s >> k;
				v[i++] = v[k-1];
				p += v[k-1];
			}
		}
		cout << p << endl;
	}
}





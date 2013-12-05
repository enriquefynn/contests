#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <climits>
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
	int l, mini;
	string s;
	while(cin >> l, l)
	{
		cin >> s;
		int d, r;
		d = r = -1;
		mini = INT_MAX;
		for (int i = 0; i < l; ++i)
		{
			if (s[i] == 'Z')
			{
				mini = 0;
				break;
			}
			if (s[i] == 'R')
			{
				r = i;
				if (d != -1)
					mini = min(mini, abs(r - d));
			}
			else if (s[i] == 'D')
			{
				d = i;
				if (r != -1)
					mini = min(mini, abs(r - d));
			}
		}
		cout << mini << endl;
	}
}




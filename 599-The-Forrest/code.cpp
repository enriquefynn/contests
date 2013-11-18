#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <bitset>
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
	int n, ac, ed;
	bitset<26> bs;
	string s;
	cin >> n;
	while(n--)
	{
		bs = ed = ac = 0;
		while(1)
		{
			cin >> s;
			bs[s[1] - 'A'] = 1;
			bs[s[3] - 'A'] = 1;
			if (s[0] == '*')
				break;
			++ed;
		}
		cin >> s;
		int i;
		
		for (i = 0; i < s.size(); ++++i)
			if (!(bs[s[i] - 'A']))
				ac++;
		cout << "here are " << i/2 - ed - 1 << " tree(s) and " << ac << " acorn(s).\n";
	}
}











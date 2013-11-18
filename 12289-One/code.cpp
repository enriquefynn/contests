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
	int n, one, two;
	string s;
	cin >> n;
	while(n--)
	{
		one = two = 0;
		cin >> s;
		if (s.size() == 5)
			cout << "3\n";
		else 
		{
			if (s[0] == 'o')
				++one;
			if (s[1] == 'n')
				++one;
			if (s[2] == 'e')
				++one;
			if (s[0] == 't')
				++two;
			if (s[1] == 'w')
				++two;
			if (s[2] == 'o')
				++two;
			cout << ((one > two) ? "1\n" : "2\n");
		}
	}
}












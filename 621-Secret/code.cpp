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
	string s;
	int n;
	cin >> n;
	while(n--)
	{
		cin >> s;
		if (s.size() == 1)
			cout << "+\n";
		else if (s[s.size()-2] == '3' && s[s.size()-1] == '5')
			cout << "-\n";
		else if (s[0] == '9' && s[s.size()-1] == '4')
			cout << "*\n";
		else if (s.size() >=3 && s[0] == '1' && s[1] == '9' && s[2] == '0')
			cout << "?\n";
		else
			cout << "+\n";
	}
}

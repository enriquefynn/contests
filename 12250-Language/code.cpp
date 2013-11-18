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
	int i = 1;
	string s;

	while(1)
	{
		cin >> s;
		if (s[0] == '#')
			break;
		cout << "Case " << i++ << ": ";
		if (s == "HELLO")
			cout << "ENGLISH\n";
		else if (s == "HOLA")
			cout << "SPANISH\n";
		else if (s == "HALLO")
			cout << "GERMAN\n";
		else if (s == "BONJOUR")
			cout << "FRENCH\n";
		else if (s == "CIAO")
			cout << "ITALIAN\n";
		else if (s == "ZDRAVSTVUJTE")
			cout << "RUSSIAN\n";
		else
			cout << "UNKNOWN\n";
	}
}










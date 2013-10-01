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

int x, y;
bool grid[30][30];
int f(int i, int j)
{
	if ((i < 0) || (i > x) || (j < 0) || (j > y))
		return 0;
	if (grid[i][j])
	{
		grid[i][j] = false;
		return 1 + f(i-1, j-1) + f(i, j-1) + f(i+1, j-1) + f(i-1, j) + f(i+1, j) + f(i-1, j+1) + f(i, j+1) + f(i+1, j+1); 
	}
	else
		return 0;
}



main()
{
	int n;
	string s;
	cin >> n;
	getline(cin, s);
	getline(cin, s);
	while(n--)
	{
		bool first = false;
		while(1)
		{
			getline(cin, s);
			if (s == "")
				break;
			if (!first)
			{
				x = s.size();
				first = true;
			}
			for (int j = 0; j < s.size(); ++j)
				grid[y][j] = (s[j] == '1');
			++y;
		}
		int maxi = 0;
		for (int i = 0; i < x; ++i)
			for (int j = 0; j < y; ++j)
				maxi=max(maxi, f(i,j));
		cout << maxi << endl;
		y = 0;
	}
}


















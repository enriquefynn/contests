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

int x;
int y = 0;
char grid[100][100];
void f(int i, int j)
{
	if (grid[i][j] == ' ')
	{
		grid[i][j] = '#';
		f(i, j-1);
		f(i-1, j);
		f(i+1, j);
		f(i, j+1);
	}
	else
		return;
}



main()
{
	int n;
	string s;
	cin >> n;
	getline(cin, s);
	int maxx;
	while(n--)
	{
		bool first = false;
		for (int i = 0; i < 100; ++i)
			for (int j = 0; j < 100; ++j)
				grid[i][j] = '\n';
		while(1)
		{
			getline(cin, s);
			if (s[0] == '_')
				break;
			if (!first)
			{
				x = s.size();
				maxx = x;
				first = true;
			}
			for (int j = 0; j < s.size(); ++j)
				grid[y][j] = s[j];
			++y;
		}
		int maxi = 0;
		for (int i = 0; i < y; ++i)
			for (int j = 0; grid[i][j] != '\n'; ++j)
				if (grid[i][j] == '*')
				{
					grid[i][j] = ' ';
					f(i,j);
					goto end;
				}
end:
		for (int i = 0; i < y; ++i)
		{
			for (int j = 0; grid[i][j] != '\n'; ++j)
				cout << grid[i][j];
			cout << endl;
		}
		cout << s << endl;
		y = 0;
	}
}


















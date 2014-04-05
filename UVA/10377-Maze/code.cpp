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
	int n, x, y;
	int px, py;
	cin >> n;
	string s;
	bool grid[1000][1000];
	cin >> y >> x;
	char p;
	while(n--)
	{
		getline(cin, s);
		p = 'N';
		for (int i = 0; i < y; ++i)
		{
			getline(cin, s);
			for (int j = 0; j < x; ++j)
				grid[j][i] = (s[j] == '*');
		}
		cin >> py >> px;
		--py;
		--px;
		while(1)
		{
			cin >> s;
			if (cin.bad())
				break;
			if (s[0] >= '0' && s[0] <= '9')
			{
				y = atoi(s.c_str());
				break;
			}
			for (int i = 0; i < s.size(); ++i)
			{
				if (s[i] == 'Q')
					goto end;
				else if (s[i] == 'R')
				{
					if (p == 'N')
						p = 'E';
					else if (p == 'E')
						p = 'S';
					else if (p == 'S')
						p = 'W';
					else
						p = 'N';
				}
				else if (s[i] == 'L')
				{
					if (p == 'N')
						p = 'W';
					else if (p == 'W')
						p = 'S';
					else if (p == 'S')
						p = 'E';
					else
						p = 'N';
				}
				else if (s[i] == 'F')
				{
					if (p == 'N')
						if (py - 1 > 0)
							if (grid[px][py-1] == false)
								--py;
					if (p == 'E')
						if (px + 1 < x)
							if (grid[px+1][py] == false)
								++px;
					if (p == 'S')
						if (py + 1 < y)
							if (grid[px][py+1] == false)
								++py;
					if (p == 'W')
						if (px - 1 > 0)
							if (grid[px-1][py] == false)
								--px;
				}
			}
		}
		end:
			cout << py+1 << ' ' << px+1 << ' ' << p << endl;
		cin >> x;
	}
}














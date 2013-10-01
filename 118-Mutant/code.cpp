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

char rotateR(char p)
{
	if (p == 'N')
		return 'E';
	if (p == 'E')
		return 'S';
	if (p == 'S')
		return 'W';
	return 'N';
}

char rotateL(char p)
{
	if (p == 'N')
		return 'W';
	if (p == 'W')
		return 'S';
	if (p == 'S')
		return 'E';
	return 'N';
}

main()
{
	char p;
	int n, m, x, y;
	bool mat[100][100];
	cin >> n >> m;
	++n;
	++m;
	string s;
	bool err;
	for (int i = 0; i < 100; ++i)
		for (int j = 0; j < 100; ++j)
			mat[i][j] = false;
	while(cin >> x >> y >> p)
	{
	++x;
	++y;
		cin >> s;
		err = false;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] != 'F')
			{
				if (s[i] == 'R')
					p = rotateR(p);
				else
					p = rotateL(p);
			}
			else
			{
				if (p == 'N')
				{
					if (y+1 > m)
					{
						if (mat[x][y])
							goto en;
						err = true;
						mat[x][y] = true;
						break;
					}
					y+=1;
				}
				else if (p == 'E')
				{
					if (x+1 > n)
					{
						if (mat[x][y])
							goto en;
						err = true;
						mat[x][y] = true;
						break;
					}
					x+=1;
				}
				else if (p == 'S')
				{
					if (y-1 < 1)
					{
						if (mat[x][y])
							goto en;
						err = true;
						mat[x][y] = true;
						break;
					}
					y-=1;
				}
				else
				{
					if (x-1 < 1)
					{
						if (mat[x][y])
							goto en;
						err = true;
						mat[x][y] = true;
						break;
					}
					x-=1;
				}
			}
			en:int k;
		}
		cout << x-1 << ' ' << y-1 << ' ' << p;
		if (err)
			cout << " LOST";
		cout << endl;
	}
}






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
	int x, y, p, px, py;
	string s;
	char ppos;
	bool end;
	char grid[200][200];
	while(1)
	{
		cin >> y >> x >> p;
		if (!x && !y)
			break;
		for (int i = 0; i < y; ++i)
		{
			cin >> s;
			for (int j = 0; j < x; ++j)
			{
				grid[j][i] = s[j];
				if (s[j] == 'N' || s[j] == 'S' || s[j] == 'L' || s[j] == 'O')
				{
					px = j;
					py = i;
				}
			}
		}
		cin >> s;
		int st = 0;
		for (int i = 0; i < p; ++i)
		{
			switch(s[i])
			{
				case 'D':
					switch (grid[px][py])
					{
						case 'N':
							grid[px][py] = 'L';
							break;
						case 'L':
							grid[px][py] = 'S';
							break;
						case 'S':
							grid[px][py] = 'O';
							break;
						case 'O':
							grid[px][py] = 'N';
							break;
					}
					break;
				case 'E':
					switch (grid[px][py])
					{
						case 'N':
							grid[px][py] = 'O';
							break;
						case 'O':
							grid[px][py] = 'S';
							break;
						case 'S':
							grid[px][py] = 'L';
							break;
						case 'L':
							grid[px][py] = 'N';
							break;
					}
					break;
				case 'F':
					switch(grid[px][py])
					{
						case 'N':
							if (py-1 < 0 || grid[px][py-1] == '#')
								break;
							switch(grid[px][py-1])
							{
								case '.':
									grid[px][py-1] = 'N';
									grid[px][py] = '.';
									--py;
									break;
								case '*':
									grid[px][py-1] = 'N';
									grid[px][py] = '.';
									++st;
									--py;
									break;
							}
						break;
						case 'L':
							if (px+1 >= x || grid[px+1][py] == '#')
								break;
							switch(grid[px+1][py])
							{
								case '.':
									grid[px+1][py] = 'L';
									grid[px][py] = '.';
							++px;
									break;
								case '*':
									grid[px+1][py] = 'L';
									grid[px][py] = '.';
									++st;
							++px;
									break;
							}
						break;
						case 'S':
							if (py+1 >= y || grid[px][py+1] == '#')
								break;
							switch(grid[px][py+1])
							{
								case '.':
									grid[px][py+1] = 'S';
									grid[px][py] = '.';
							++py;
									break;
								case '*':
									grid[px][py+1] = 'S';
									grid[px][py] = '.';
									++st;
							++py;
									break;
							}
						break;
						case 'O':
							if (px-1 < 0 || grid[px-1][py] == '#')
								break;
							switch(grid[px-1][py])
							{
								case '.':
									grid[px-1][py] = 'O';
									grid[px][py] = '.';
							--px;
									break;
								case '*':
									grid[px-1][py] = 'O';
									grid[px][py] = '.';
									++st;
							--px;
									break;
							}
						break;
					}
					break;
			}
		}
		cout << st << endl;
	}

	return 0;
}
















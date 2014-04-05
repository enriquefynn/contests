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

	int mat[11][11];
	char mat2[11][11];
	while(1)
	{
		int x, y, px;
		cin >> y >> x >> px;
		for (int i = 0; i < x; ++i)
			for (int j = 0; j < y; ++j)
				mat[i][j] = 0;
		if (!x && !y && !px)
			break;
		--px;
		string s;
		int py = 0;
		bool stop = false;
		int steps = 0;
		bool cycle = false;
		for (int i = 0; i < y; ++i)
		{
				cin >> s;
				for (int j = 0; j < x; ++j)
					mat2[j][i] = s[j];
		}
		while(1)
		{
			switch(mat2[px][py])
			{
				case 'N':
					if (py - 1 == -1)
					{
						goto end;
					}
					else
					{
						if (mat[px][py] != 0)
						{
							cycle = true;
							goto end;
						}
						mat[px][py] = ++steps;
						--py;
					}
					break;
				case 'E':
          if (px + 1 == x)
          {
            goto end;
          }
          else
          {
            if (mat[px][py] != 0)
            {
              cycle = true;
              goto end;
            }
            mat[px][py] = ++steps;
            ++px;
          }
          break;
				case 'S':
          if (py + 1 == y)
          {
            goto end;
          }
          else
          {
            if (mat[px][py] != 0)
            {
              cycle = true;
              goto end;
            }
            mat[px][py] = ++steps;
            ++py;
          }
          break;
				case 'W':
          if (px - 1 == -1)
          {
            goto end;
          }
          else
          {
            if (mat[px][py] != 0)
            {
              cycle = true;
              goto end;
            }
            mat[px][py] = ++steps;
            --px;
          }
          break;
			}
		}
		for (int i = 0; i < y; ++i)
		{
			for (int j = 0; j < x; ++j)
				cout << mat2[j][i];
			cout << endl;
		}
		end:
		if (cycle)
			cout << mat[px][py]-1 << " step(s) before a loop of " << steps+1 - mat[px][py] << " step(s)\n" ;
		else
			cout << steps+1 << " step(s) to exit\n";
	}
	return 0;
}







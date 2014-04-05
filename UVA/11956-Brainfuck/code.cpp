#include <iostream>
#include <cstring>
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
	int t, p;
	short arr[100];
	char c;
	bool flag;
	scanf("%d\n", &t);
	for (int i = 1; i <= t; ++i)
	{
		memset(arr, 0, 100*sizeof(short));
		p = 0;
		while(c = getchar())
		{
			if (c == '\n')
				break;
			else
			{
				if (c == '>')
				{
					if (p == 99)
						p = 0;
					else
						++p;
				}
				else if (c == '<')
				{
					if (p == 0)
						p = 99;
					else
						--p;
				}
				else if (c == '+')
				{
					if (arr[p] == 255)
						arr[p] = 0;
					else
						++arr[p];
				}
				else if (c == '-')
				{
					if (arr[p] == 0)
						arr[p] = 255;
					else
						--arr[p];
				}
				flag = false;
			}
		}
			printf("Case %d: ", i);
			for (int j = 0; j < 99; ++j)
				printf("%02X ", arr[j]);
			printf("%02X\n", arr[99]);
	}
}


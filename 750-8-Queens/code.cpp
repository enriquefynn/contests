#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cstring>
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
int row[8];

bool coloca(int x, int y)
{
	for (int i = 0; i < y; ++i)
		if (row[i] == x || (abs(row[i] - x) == abs(i - y)))
			return false;
	return true;
}
int a, b, line;
void bt(int c)
{
	if (c == 8 && row[b] == a)
	{
		printf("%2d      %d", ++line, row[0] + 1);
		for (int j = 1; j < 8; ++j)
			printf(" %d", row[j] + 1);
		printf("\n");
	}
	for (int i = 0; i < 8; ++i)
		if (coloca(i,c))
		{
			row[c] = i;
			bt(c+1);
		}
}

main()
{
	int n, x, y;
	cin >> n;
	while(n--)
	{
		memset(row, 0, sizeof(row));
		line = 0;
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		cin >> a >> b;
		a--; b--;
		bt(0);
		if (n) cout << endl;
		
	}

}

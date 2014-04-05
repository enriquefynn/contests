#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#define swap(a, b) {int aux = a; a = b; b = a;}
#define EPS 0.0000000000000001
#define fori(N) for(i = 0; i < N; ++i)
#define forid(N) for(int i = 0; i < N; ++i)
#define forj(N) for(j = 0; j < N; ++j)
#define forjd(N) for(int j = 0; j < N; ++j)

using namespace std;

int gcd(int a, int b) {return (b == 0 ? a : printf("%d ",gcd(b, a%b)));}
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
	int a, b;
	while(scanf("%d %d", &a, &b))
	{
		while(a % b > 0)
		{
			printf("%d", a%b);
			a -= (a/b)*b; //integer divison
			swap(a,b);
		}
		printf("\n");
	}
}

















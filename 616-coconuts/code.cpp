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

struct pto
{
	double x;
	double y;
	pto(){}
	pto(double _x, double _y){ x = _x; y = _y;}
};

main()
{
	int n, t;
	bool sol;
	int p, i, aux;
	while(1)
	{
	sol = false;
	scanf("%d", &n);
	if (n < 0)
		return 0;
	t = sqrt(n) + 1;
	for(p = t; p >= 2 && !sol; p--)	
	{
		aux = n;
		for (i = 0; i < p && aux%p==1; i++)
			aux -= (aux/p + 1);
		if (i == p && aux%p == 0)
		{
				sol = true;
				goto end;
		}
	}
	end:
	printf("%d coconuts, ", n);
	if (sol)
		printf("%d people and 1 monkey\n", p);
	else
		printf("no solution\n");
	}
}




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

int soma(int n)
{
	int p = 0;
	forid(n)
		if (!(n%i))
			p+=i;
	return p;
}

main()
{
	int n;
	printf("PERFECTION OUTPUT\n");
	while(1)
	{
		scanf("%d", &n);
		if (!n)
			break;
		if (n < 10)
			printf("    ");
		else if (n < 100)
			printf("   ");
		else if (n < 1000)
			printf("  ");
		else if (n < 10000)
			printf(" ");

		printf("%d  ", n);
		int p = 0;
		for (int i = 1; i < n; ++i)
		{
			if (!(n%i))
				p+=i;
		}
		if (p == n)
			printf("PERFECT\n");
		else if (p < n)
			printf("DEFICIENT\n");
		else
			printf("ABUNDANT\n");
	}
	printf("END OF OUTPUT\n");
	return 0;
}







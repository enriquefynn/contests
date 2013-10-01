#include <stdio.h>
#include <math.h>

long double a, b, c;
long double tri, bigr, smallr, s, p, are;
main()
{
	long double pi = 2*acos(0);
	while(scanf("%llf %llf %llf", &a, &b, &c) != EOF)
	{
		s = (a + b + c)/2;
		tri = sqrt(s*(s - a) * (s - b) * (s - c));
		smallr = tri/s;
		bigr = (a*b*c) / (4*tri);
		are = pi*smallr*smallr;
		printf("%.4llf %.4llf %.4llf\n", pi*bigr*bigr - tri, tri - are, are);
	}
	return 0;
}

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double p1x, p1y, p2x, p2y, p3x, p3y, distMax;

int n;
main()
{
	int caso = 1;
	while(1)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		scanf("%lf %lf %lf %lf %lf %lf", &p1x, &p1y, &p2x, &p2y, &p3x, &p3y);
		double a = hypot(p1x - p2x, p1y - p2y);
		double b = hypot(p1x - p3x, p1y - p3y);
		double c = hypot(p2x - p3x, p2y - p3y);
		double s = (a + b + c)/2;
		double A = sqrt(s * (s - a) * (s - b) * (s - c));
		double radius = a * b *c /(4*A);

		printf("Poligon %d: %.3lf\n",  caso++, 4*radius*radius);
	}
	return 0;
}










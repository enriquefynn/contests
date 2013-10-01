#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

double pi = 2*acos(0);

main()
{
	int caso = 1;
	while(1)
	{
		double areaPol, lado, inrad, n, tanpi, outrad;
		scanf("%lf", &n);
		if (n < 3)
			break;
		scanf("%lf", &areaPol);
		tanpi = tan(pi/n);
		lado = areaPol/n;
		lado*= 4*tanpi;
		lado = sqrt(lado);
		inrad = lado/(2*tanpi);
		inrad = inrad*inrad * pi;
		outrad = sqrt(areaPol*2/(n*sin(2*pi/n)));
		printf("Case %d: %.5lf %.5lf\n", caso++, outrad*outrad*pi - areaPol, areaPol - inrad);
	}
	return 0;
}





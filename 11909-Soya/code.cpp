#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

long double l, w, h, th, areap, areat;

main()
{
	while(scanf("%llf %llf %llf %llf", &l, &w, &h, &th) != EOF)
	{
		areap = l*w*h;
		if (l < h)
			areat = (tan(th*(M_PI/180.))*w*l*l)/2.;
		else
			areat = (w*l*l)/(2.*(tan(th*(M_PI/180.))));
		cout << (tan(th*M_PI/180.)) << endl;
		printf("%.3llf mL\n", areap - areat);
	}
}

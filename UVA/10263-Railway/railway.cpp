#include <iostream>
#include <cstdio>
#include <cfloat>
#include <cmath>
using namespace std;

main()
{
	double x, y, px, py, Ax, Ay, Bx, By;
	int n, i;
	double maxim;
	double cx, cy, cmax, cmay;
	while(scanf("%lf %lf %d", &px, &py, &n) != EOF)
	{
		maxim = DBL_MAX;
		scanf("%lf %lf", &Ax, &Ay);
		while(n--)
		{
			double p;
			scanf("%lf %lf", &Bx, &By);
			if (Ax*By + px*Ay + py*Bx - py*Ay- px*By - Ay*Bx == 0)
			{
				p = hypot(Ax - Ay, px - py);
				double q = hypot(px - py, Bx - By);
				if (q < p)
				{
					cmax = Bx;
					cmay = By;
					maxim = q;
				}
				else
				{
					cmax = Ax;
					cmay = Ay;
					maxim = p;
				}

			}
		else{
			p = (double)((double) (px - Ax) * (Bx - Ax) + (double) (py - Ay) * (By - Ay))/
			((double)(Bx - Ax) * (Bx - Ax) + (double)(By - Ay) * (By - Ay));
			cx = (double)Ax + (double)p*(double)(Bx - Ax);
			cy = (double)Ay + (double)p*(double)(By - Ay);
			p = hypot((double)cx - px, (double)cy - py);
			if (p < maxim)
			{
				maxim = p;
				cmax = cx;
				cmay = cy;
			}
		}
			Ax = Bx;
			Ay = By;
		}
		printf("%.4lf\n%.4lf\n", cmax, cmay);
	}
}


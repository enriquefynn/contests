#include <iostream>
#include <cstdio>
#include <cmath>

#define EPS 0.0000000000000001

using namespace std;

double R;

double vx[100], vy[100];
int N, i, j, k;

double cx, cy;

bool f(double p1x, double p1y, double p2x, double p2y, bool ff)
{
	double q = hypot(p1x - p2x, p1y - p2y);
	cx = (p1x + p2x)/2;
	cy = (p1y + p2y)/2;
	double det = sqrt(R*R - (q/2)*(q/2));
	if (ff)
	{
		cx = cx + det * (p1y - p2y)/q;
		cy = cy + det * (p2x - p1x)/q;
	}
	else
	{
		cx = cx - det * (p1y - p2y)/q;
		cy = cy - det * (p2x - p1x)/q;
	}
	/*
       double d2 = (p1x - p2y) * (p1x - p2x) + (p1y - p2y) * (p1y - p2y);
       double det = R*R / d2 - 0.25;
       if (det < 0.0)
       {
       	return false;
       	}
       double h = sqrt(det);
       cx = (p1x + p2x) * 0.5 + (p1y - p2y) * h;
       cy = (p1y + p2y) * 0.5 + (p2x - p1x) * h;*/
       return true;
}

bool incircle(double px, double py)
{
       double dx = px - cx, dy = py - cy;
       double euc = dx * dx + dy * dy, rSq = R*R;
       return (euc <= rSq);
}

int main()
{
ma:       while(1)
       {
       				bool flag;
               scanf("%d", &N);
               if (!N)
                       break;
               for (i = 0; i < N; ++i)
                       scanf("%lf %lf", &vx[i], &vy[i]);
               scanf("%lf", &R);
               //cout << "RAIO: " << R << endl;
               if (N == 1)
               	goto pos;
               	
               for (i = 0; i < N; ++i)
               {
                       for (j = i + 1; j < N; ++j)
                       {
                               double d = hypot(vx[i] - vx[j], vy[i] - vy[j]);
                               if (d > 2*R)
                               {
                                       //cout << "DIST: " << d  << endl;
                                       goto imp;
                                       }
                               else if (fabs(d - 2*R) <= EPS)
                               {
                                       flag = f(vx[i], vy[i], vx[j], vy[j], true);
                                       if (flag)
                                       {
                                       	for (k = 0; k < N; ++k)
                                       	        if (!incircle(vx[k], vy[k]))
                                       	        					break;
                                       	 if (k == N)
                                       			goto pos;
                                       }
                               }
                               else
                               {
                                       flag = f(vx[i], vy[i], vx[j], vy[j], true);
                                       if (flag)
																			{
                                       	for (k = 0; k < N; ++k)
                                        	       if (!incircle(vx[k], vy[k]))
                                        	               break;
                                       		if (k == N)
                                       				goto pos;
                                       }
                                       
                                       flag = f(vx[j], vy[j], vx[i], vy[i], false);
                                       
                                       if (flag)
                                       {
                                       		for (k = 0; k < N; ++k)
                                        	       if (!incircle(vx[k], vy[k]))
                                              			break;
                                          if (k == N)
                                       		goto pos;
                                       }
                               }
                       }
               }
imp:
               printf("There is no way of packing that polygon.\n");
               goto ma;
               pos:           printf("The polygon can be packed in the circle.\n"); goto ma;
       }
       return 0;
}

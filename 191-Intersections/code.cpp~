#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
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

pto l1, l2, r1, r2;

double F(pto p)
{
	 return ((l2.y-l1.y)*p.x + (l1.x-l2.x)*p.y + (l2.x*l1.y - l1.x*l2.y));
}

void swap_pts(pto *p1, pto *p2)
{
	pto aux;
	aux.x = p1->x;
	aux.y = p1->y;
	p1->x = p2->x;
	p1->y = p2->y;
	p2->x = aux.x;
	p2->y = aux.y;
}

main()
{
	int N;
	cin >> N;
	forid(N)
	{
		cin >> l1.x >> l1.y >> l2.x >> l2.y >> r1.x >> r1.y >> r2.x >> r2.y;
		
		
		
		pto ptos[4];
		ptos[0].x = r1.x;
		ptos[0].y = r1.y;
		ptos[1].x = r2.x;
		ptos[1].y = r1.y;
		ptos[2].x = r1.x;
		ptos[2].y = r2.y;
		ptos[3].x = r2.x;
		ptos[3].y = r2.y;
		double res[4];
		int j;
		forj(4)
			res[j] = F(ptos[j]);
		
		int pos = 0;
		forj(4)
		{
			if (res[j] > 0)
				++pos;	
		}
		if (pos == 4 || pos == 0)
		{
			cout << 'F' << endl;
			continue;
		}
		if (l1.x > r2.x && l2.x > r2.x)
		{
			cout << 'F' << endl;
			continue;
		}
		if (l1.x < r1.x && l2.x < r1.x)
		{
			cout << 'F' << endl;
			continue;
		}
		if (l1.y > r2.y && l2.y > r2.y)
		{
			cout << 'F' << endl;
			continue;
		}
		if (l1.y < r1.y && l2.y < r1.y)
		{
			cout << 'F' << endl;
			continue;
		}
		cout << 'T' << endl;
	}
}















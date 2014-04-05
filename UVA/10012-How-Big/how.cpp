#include <iostream>
#include <cmath>
#include <cfloat>
#include <algorithm>
#include <cstdio>

using namespace std;

int N, n;

double v[8];

double c[8];

double dist(int dis)
{
	double dd;
	if (dis == 1)
		return 2*v[0];
	dd = v[0];
	//cout << "V[0]: " << v[0] << " V[1]: " << v[1] << endl;
	//cout << "DD " << dd << endl; 
	double di;
	bool flag = false;
	c[0] = v[0];
	for (int i = 0; i < dis - 1; ++i)
	{
		/*di = 2*sqrt(v[i]*v[i+1]);
		if (di < v[i])
		{
			flag = true;
			di+=v[i];
		}
		else
		{
			dd += di;
			flag = false;
		}*/
		for (int j = 0; j < i; ++j)
			c[i] = max(v[i], max(c[j], 2*sqrt(v[i]*v[j])));
	}
	double maxim = 0;
	for (int i = 0; i < n; ++i)
		maxim = max(maxim, c[i] + v[i]);
	//dd+= v[n-1];
	return maxim;
}

int main()
{
	int i;
	double minim;
	scanf("%d", &N);
	while(N--)
	{
		minim = DBL_MAX;
		scanf("%d", &n);
		for (i = 0; i < n; ++i)
			scanf("%lf", &v[i]);
		sort(v, v + n);
		do
		{
			minim = min(minim, dist(n));
			cout << "MINIM: " << minim << endl;
		} while(next_permutation(v, v+n));
		printf("%.3lf\n", minim);
	}
}










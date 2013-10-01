#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;


typedef pair<int, int> pto;
vector<pto> v;


double dist(pto p1, pto p2)
{
	return hypot((double)p1.first - (double)p2.first, (double)p1.second - (double)p2.second);
}

main()
{
	int x, y, N, n, i;
	double d;
	scanf("%d", &N);
	while(N--)
	{
		v.clear();
		scanf("%d", &n);
		for (i = 0; i < n; ++i)
		{
			scanf("%d %d", &x, &y);
			v.push_back(make_pair(x, y));
		}
		sort(v.begin(), v.end());
		d = dist(v[n-1], v[n-2]);
		pto p = v[n-2];
		for (i = n - 3; i >=0; --i)
		{
			if (v[i].second > p.second)
			{
				double a, b;
				pto aux;
				//y = ax + b - v[i] e v[i+1]
				if (v[i].first == v[i+1].first)
				{
					d+= v[i].second - v[i+1].first;
				}
				else
				{
					a = ((double)(v[i].second - v[i+1].second)/(double) (v[i].first - v[i+1].first));
					b = v[i].second - a*v[i].first;
					double x1 = (p.second - b)/a;
					double y1 = p.second;
					d+= sqrt((x1 - v[i].first)*(x1 - v[i].first) + (y1 - v[i].second) * (y1 - v[i].second));
				}
				p = v[i];
			}
		}
		printf("%.2lf\n", d);
	}
}




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

unsigned long long ack(unsigned long long n)
{
	unsigned long long p = 0;
	if (n == 1)
		return 3;
	while(n != 1)
	{
		p++;
		if (n%2)
			n = 3*n + 1;
		else
			n /= 2;
	}
	return p;
}

main()
{
	unsigned long long L, H;
	int  i;
	while(1)
	{
		cin >> L >> H;
		if (L + H == 0)
			break;
		if (L > H)
			swap(L, H);
		unsigned long long maxp = 0;
		unsigned long long maxpi = 0;
		for(i = L; i <= H; ++i)
		{
			unsigned long long p = ack(i);
			if (p > maxp)
			{
				maxpi = i;
				maxp = p;
			}
		}
		cout << "Between " << L << " and " << H << ", " << maxpi << " generates the longest sequence of " << maxp << " values.\n";
	}
	return 0;
}







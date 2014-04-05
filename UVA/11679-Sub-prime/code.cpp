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

int gcd(int a, int b) {return (b = 0 ? a : gcd(b, a%b));}
int lcm(int a, int b) {return (a * (b / gcd(a, b))); }

struct pto
{
	double x;
	double y;
	pto(){}
	pto(double _x, double _y){ x = _x; y = _y;}
};

main()
{
	int B, N, banks[10000], d, c, v;
	while(1)
	{
		cin >> B >> N;
		if (!B && !N)
			break;
		for (int i = 1; i <= B; ++i)
			cin >> banks[i];
		for (int i = 0; i < N; ++i)
		{
			cin >> d >> c >> v;
			banks[d]-=v;
			banks[c]+=v;
		}
		int i;
		for (i = 1; i <= B; ++i)
			if (banks[i] < 0)
			{
				cout << "N\n";
				break;
			}
		if (i == B+1)
			cout << "S\n";
	}
	return 0;
}




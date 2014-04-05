#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <bitset>
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
	int n, m, c, dev;
	int co[100000];
	bool first = true;
	int i = 1;
	bitset<100> b;
	while(1)
	{
		b = 0;
		int ma = 0;
		int curr = 0;
		cin >> n >> m >> c;
		if (!n && !m && !c)
			break;
		cout << "Sequence " << i++ << endl;
		for (int i = 0; i < n; ++i)
			cin >> co[i];
		for (int i = 0; i < m; ++i)
		{
			cin >> dev;
			--dev;
			if (ma == -1)
				continue;
			if (b[dev])
			{
				b[dev] = false;
				curr-= co[dev];
			}
			else
			{
				b[dev] = true;
				curr += co[dev];
			}
			if (curr > c)
				ma = -1;
			else if (curr > ma)
				ma = curr;
		}
		if (ma == -1)
			cout << "Fuse was blown.\n\n";
		else
			cout << "Fuse was not blown.\nMaximal power consumption was " << ma << " amperes.\n\n";
	}
	return 0;
}




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
	double pr;
	int c;
	int n, p, k;
	string s,r, nome;
	map<string, int> req;
	double maxc, maxpr;
	int lll = 1;
	bool fir = true;
	while(cin >> n >> p, n || p)
	{
		maxpr = 2000000000;
		maxc = -1;
		req.clear();
		if (fir)
			fir = false;
		else
			cout << endl;
		cin.ignore();
		for (int i = 0; i < n; ++i)
		{
			getline(cin, s);
			req[s] = 1;
		}
		c = 0;
		for (int i = 0; i < p; ++i)
		{
			getline(cin, s);
			scanf("%lf %d\n", &pr, &c);
			if (c > maxc)
			{
				maxpr = pr;
				maxc = c;
				nome = s;
			}
			if (c == maxc)
			{
				if (pr < maxpr)
				{
					maxpr = pr;
					nome = s;
					maxc = c;
				}
			}
			for (int j = 0; j < c; ++j)
				getline(cin, s);
		}
		cout << "RFP #" << lll++ << endl << nome << endl;

	}
	return 0;
}














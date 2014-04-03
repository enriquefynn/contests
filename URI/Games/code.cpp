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

int main()
{
	int t, n;
	cin >> t;
	string v[1000];
	while(t--)
	{
		cin >> n;
		int c = 0;
		scanf("%d\n", &n);
		for (int i = 0; i < n; ++i)
			getline(cin, v[i]);
		for (int i = 1; i < n; ++i)
		{
			string aux = v[i];
			int ai = i;
			int j = i;
			if (v[i] < v[i-1])
			{
				++c;
				while(j > 0 && v[i-1] > v[j])
				{
					swap(v[j], v[j-1]);
					--j;
				}
			}
		}
	//	for (int i = 0; i < n; ++i)
	//		cout << v[i] << endl;
		cout << c << endl;
	}
}

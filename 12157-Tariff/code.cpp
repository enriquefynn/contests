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
	int p, n, N, m, j, aux;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		m = j = 0;
		cin >> N;
		p = 0;
		while (N--)
		{
			cin >> aux;
			m+= (aux/30 + 1)*10;
			j+= (aux/60 + 1)*15;
		}
		cout << "Case " << i << ": "; 
		if (m == j)
		{
			cout << "Mile Juice " << m << endl;
		}
		else if (m < j)
			cout << "Mile " << m << endl;
		else
			cout << "Juice " << j << endl;
	}
}










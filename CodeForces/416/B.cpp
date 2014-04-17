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
	int aux, m, n, dp[50002][7];
	cin >> m >> n;
	for (int i = 0; i <= m+2; ++i)
			dp[i][0] = 0;
	for (int i = 0; i <= n+2; ++i)
			dp[0][i] = 0;
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <=n; ++j)
		{
			cin >> aux;
			dp[i][j] = max(dp[i][j-1], dp[i-1][j]) + aux;
		}
	}
	for (int i = 1; i <= m; ++i)
		cout << dp[i][n] << ' ';
	cout << endl;
}

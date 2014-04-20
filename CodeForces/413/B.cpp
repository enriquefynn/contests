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
    int n, m, k, a, b, scores[20001], p[20001], c[20001];
    cin >> n >> m >> k;
    forid(n)
    {
        scores[i] = 0;
        p[i] = 0;
        c[i] = 0;
    }
    int chat[20001][11];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> chat[i][j];
    for (int i = 0; i < k; ++i)
    {
        cin >> a >> b;
        ++c[b];
        ++p[a];
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            scores[i] += chat[i][j]*c[j];
        scores[i]-=p[i];
    }
    for (int i = 1; i <= n; ++i)
        cout << scores[i] << ' ';
    cout << endl;
}

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

int resp(int v[101][101], int n, int m)
{
    bool flag = true;
    forid(n/2)
    {
        forjd(m)
        {
            if (v[i][j] != v[n-i-1][j])
            {
                flag = false;
                goto a;
            }
        }
    }
a:  if (n & 1)
        return n;
    if (!flag)
        return n;
    else
        return resp(v, n/2, m);
    return n;
}

int main()
{
    int n, m, p[101][101];
    cin >> n >> m;
    forid(n)
        forjd(m)
            cin >> p[i][j];
    cout << resp(p, n, m) << endl;
}

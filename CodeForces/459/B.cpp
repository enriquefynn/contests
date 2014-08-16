#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <climits>
#include <algorithm>
#include <map>
#include <set>
#define EPS 0.0000000000000001
#define fori(N) for(i = 0; i < N; ++i)
#define forid(N) for(int i = 0; i < N; ++i)
#define forj(N) for(j = 0; j < N; ++j)
#define forjd(N) for(int j = 0; j < N; ++j)
typedef unsigned long long ull;

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
    ull n, a, ma, mi, minn, maxn;
    mi = 0;
    ma = 0;
    cin >> n;
    forid(n)
    {
        cin >> a;
        if (i == 0)
        {
            mi = ma = a;
            minn = maxn = 1;
        }
        else
        {
            if (a < mi)
            {
                minn = 1;
                mi = a;
            }
            else if (a == mi)
                ++minn;
            if (a > ma)
            {
                maxn = 1;
                ma = a;
            }
            else if (a == ma)
                ++maxn;
        }
    }
    ull r;
    if (ma == mi)
        r = (minn*(minn-1))/2;
    else
        r = minn * maxn;
    cout << ma - mi << ' ' << r << endl;
}

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#define EPS 0.0000000000000001
#define fori(N) for(i = 0; i < N; ++i)
#define forid(N) for(int i = 0; i < N; ++i)
#define forj(N) for(j = 0; j < N; ++j)
#define forjd(N) for(int j = 0; j < N; ++j)
#define x first
#define y second

typedef unsigned long long ull;
typedef long long ll;

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
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    pair<int, int> abp[51], abq[51];
    forid(p)
        cin >> abp[i].x >> abp[i].y;
    forid(q)
        cin >> abq[i].x >> abq[i].y;
    int c = 0;
    for (int i = l; i <= r; ++i)
    {
        bool flag = false;
        for (int k = 0; k < q; ++k)
        {
            forjd(p)
            {
                if (abq[k].x + i <= abp[j].y && abq[k].y + i >= abp[j].x)
                {
                    ++c;
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
    }
    cout << c << endl;
    return 0;
}


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
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    if (x1 == x2)
    {
        x3 = x1 + dy;
        y3 = y1;
        x4 = x1 + dy;
        y4 = y2;
    }
    else if (y1 == y2)
    {
        x3 = x1;
        y3 = y1 + dx;
        x4 = x2;
        y4 = y1 + dx;
    }
    else
    {
        if (dx != dy)
        {
            cout << "-1\n";
            return 0;
        }
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    }
    cout << x3 << ' ' << y3 << ' '<< x4 << ' ' << y4 << endl;
    return 0;
}

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <climits>
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
    int n;
    char mat[2001][1001];
    forid(2001)
        forjd(1001)
            mat[i][j] = ' ';
    cin >> n;
    int x, y, a;
    x = 0;
    y = 0;
    int k = 1000;
    int j = 0;
    int ymax, ymin;
    ymax = -1;
    ymin = INT_MAX;
    int f = 1;
    int ya = 0;
    forid(n)
    {
        cin >> a;
        x += a;
        y += a*f;
        f *= -1;
        ymin = min(ymin, y);
        ymax = max(ymax, y);
        {
            if (y > ya)
            {
                while(y > ya++)
                {
                    mat[k--][j++] = '/';
                }
                ++k;
            }
            else
            {
                while(y < ya--)
                {
                    mat[k++][j++] = '\\';
                }
                --k;
            }
        }
        ya = y;
    }
    for (int i = 1000-ymax+1; i <= 1000+abs(ymin); ++i)
    {
        for (int o = 0; o < x; ++o)
            cout << mat[i][o];
        cout << endl;
    }
    
}

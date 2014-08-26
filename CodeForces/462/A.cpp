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
char mat[106][106];

int getn(int x, int y)
{
    int c = 0;
    if (mat[x+1][y] == 'o')
        ++c;
    if (mat[x-1][y] == 'o')
        ++c;
    if (mat[x][y+1] == 'o')
        ++c;
    if (mat[x][y-1] == 'o')
        ++c;
    return c;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cin >> mat[i][j];
    }
    for (int i = 0; i <= n+1; ++i)
    {
        mat[0][i] = '0';
        mat[n+1][i] = '0';
        mat[i][0] = '0';
        mat[i][n+1] = '0';
    }
    mat[0][0] = '0';
    mat[0][n+1] = '0';
    mat[n+1][0] = '0';
    mat[n+1][n+1] = '0';
     /*for (int i = 0; i <= n+1; ++i)
    {
        for (int j = 0; j <= n+1; ++j)
            cout << mat[i][j];
        cout << endl;
    }
    */
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (getn(i, j)%2)
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}

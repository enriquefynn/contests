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
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for(int i = 1; i <= k-1; ++i)
    {
        printf("%d \n", m);
        for (int j = 1; j <= m; ++j)
            printf("%d %d ", i, j);
        puts("\n");
    }
    int t = n - (k - 1);
    printf("%d ", m*t);
    int l;
    for (int i = 1; i <= t; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (i&1)
                l = j;
            else
                l = m - j + 1;
            printf("%d %d ", i + k - 1, l);
        }
    }
    puts("\n");
}

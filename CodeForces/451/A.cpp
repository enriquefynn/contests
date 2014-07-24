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
    int n, m;
    cin >> n >> m;
    int p = n*m;
    int s = n+m - 1;
    int a = 1;
    while(p >= 1)
    {
        a ^=1;
        p -= (n + m - 1);
        n-=1;
        m-=1;
        if (n == 0 || m == 0)
            break;
    }
    if (!a)
        cout << "Akshat\n";
    else
        cout << "Malvika\n";
}

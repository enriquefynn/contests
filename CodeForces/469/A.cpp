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

int main()
{
    int v[106], k, n, a;
    cin >> n;
    forid(n)
        v[i] = 0;
    cin >> k;
    forid(k)
    {
        cin >> a;
        --a;
        v[a] = 1;
    }
    cin >> k;
    forid(k)
    {
        cin >> a;
        --a;
        v[a] = 1;
    }
    forid(n)
    {
        if (v[i] == 0)
        {
            cout << "Oh, my keyboard!\n";
            exit(0);
        }
    }
    cout << "I become the guy.\n";
    return 0;
}

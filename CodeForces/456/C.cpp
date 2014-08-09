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
#define ull unsigned long long

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
    ull a, v[100001], n;
    cin >> n;
    memset(v, 0ull, sizeof(v));
    for (int i = 1; i <= n; ++i)
    {
        cin >> a;
        v[a]+= a;
    }
    ull sol[100005];
    sol[0] = 0;
    sol[1] = v[1];
    for (int i = 2; i <= 100000; ++i)
        sol[i] = max(v[i] + sol[i-2], sol[i-1]);
    cout << sol[100000] << endl;
}

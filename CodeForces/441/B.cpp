#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <algorithm>
#include <map>
#include <vector>
#include <cstring>
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
    int n, v, vec[3002], dia, fr;
    cin >> n >> v;
    memset(vec, 0, sizeof(vec));
    forid(n)
    {
        cin >> dia >> fr;
        vec[dia] += fr;
    }
    int ans = 0;
    for(int i = 1; i < 3002; ++i)
    {
        int a = min(v, vec[i-1]);
        ans+= a;

        int a2 = min(v - a, vec[i]);
        ans += a2;
        vec[i] -= a2;
    }
    cout << ans << endl;
}

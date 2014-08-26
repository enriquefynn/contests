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
    ull ve[300005];
    int n;
    cin >> n;
    ll c = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin >> ve[i];
        c+= ve[i];
    }
    sort(ve+1, ve+n+1, greater<int>());
    for (int i = 2; i <= n; ++i)
        c+= ve[i]*(n - i+1);
    c+= ve[1]*(n-1);
    cout << c << endl;
    return 0;
}

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

long long soma(int i)
{
    int ac = 0;
    while(i)
    {
        ac+= i%10;
        i = i/10;
    }
    return ac;
}

long long powe(int a, int b)
{
    int c = a;
    for (int i = 1; i < b; ++i)
        c*=a;
    return c;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<long long> v;
    for (int i = 1; i <= 81; ++i)
    {
        long long x = b*powe(i, a) + c;
        if (x < 0)
            continue;
        if (x > 1e9 || i != soma(x))
            continue;
        v.push_back(x);
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << ' ';
    cout << endl;
    return 0;
}

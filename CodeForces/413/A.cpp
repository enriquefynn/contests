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
    int n, m, mi, ma, v[10000];
    cin >> n >> m >> mi >> ma; 
    int aux, p = 2;
    for (int i = 0; i < m; ++i)
    {
        cin >> aux;
        if (aux == mi || aux == ma)
            --p;
        else if (aux > ma || aux < mi)
            goto e;
    }
    p-= n-m;
    if (p <= 0)
        cout << "Correct\n";
    else
e:        cout << "Incorrect\n";

}

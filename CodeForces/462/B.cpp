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
    char a;
    ull alp[30];
    for (int i = 0; i < 30; ++i)
        alp[i] = 0;
    ull n, k;
    cin >> n >> k;
    forid(n)
    {
        cin >> a;
        ++alp[a-'A'];
        if (alp[a-'A'] > k)
            alp[a-'A'] = k;
    }
    int j = 0;
    ull cards = 0;
    ull points = 0;
    while(cards != k)
    {
        for (int i = 0; i < 30; ++i)
        {
            if (alp[i] > alp[j])
                j = i;
        }
        if (alp[j] + cards > k)
            alp[j] = k - cards;
        cards += alp[j];
        points += alp[j]*alp[j];
        alp[j] = 0;
    }
    cout << points << endl;
    return 0;
}

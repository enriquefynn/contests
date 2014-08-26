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
    int n;
    cin >> n;
    int a = n/2;
    int d = 1;
    bool inv = false;
    for (int j = 0; j < n; ++j)
    {
        for (int i = 0; i < a; ++i)
            cout << '*';
        for (int i = 0; i < d; ++i)
            cout << 'D';
        for (int i = 0; i < a; ++i)
            cout << '*';
        if (!inv)
        {
        if (a >= 0)
        {
            a-=1;
            if (a == 0)
                inv = true;
            d+=2;
        }
        }
        else
        {
            a+=1;
            d-=2;
        }
        cout << endl;
    }
}








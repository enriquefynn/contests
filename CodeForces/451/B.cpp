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
    int n, a, b;
    int v[100005];
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    int i;
    for (i = 1; i <= n; ++i)
    {
        if (i+1 <= n)
        {
            if (v[i] > v[i+1])
                break;
        }
    }
    if (i > n)
        i = n;
    //cout << "I: " << i << endl;
    a = i;
    int j;
    for (j = i; j <= n; ++j)
    {
        if (j+1 <= n)
            if (v[j] < v[j+1])
                break;
    }
    if (j > n)
        j = n;
    //cout << "J: " << j << endl;
    b = j;
    int k;
    for (k = b; k >= 1; --k)
    {
        if (k-1 >= 1)
        {
            if (v[k] > v[k-1])
                break;
        }
    }
    if (k == 0)
        k = 1;
    for (int l = j + 1; l <= n; ++l)
    {
        if (l+1 <= n)
            if (v[l] > v[l+1])
            {
                cout << "no\n";
                return 0;
            }
    }
    //cout << "K: " << k << endl;
    if ((k-1 >= 1) && (v[b] < v[k-1]))
    {
        cout << "no\n";
        return 0;
    }
    if ((b+1 <= n) && (v[k] > v[b+1]))
    {
        cout << "no\n";
        return 0;
    }
    cout << "yes\n" << k << ' ' << b << endl;

    //cout << k;

}

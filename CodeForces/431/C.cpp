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
    int n, k, d;
    ull pd1[101];
    ull pd2[101];
    cin >> n >> k >> d;
    memset(pd1, 0, (n+1)*sizeof(ull));
    memset(pd2, 0, (n+1)*sizeof(ull));
    pd1[0] = 1;
    pd2[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        int minj = min(i,d-1);
        for (int j = 1; j <= minj; ++j)
        {
       //     cout << "PD1[" << i <<"] += " << "PD1[" << i - j <<"]\n";
            pd1[i] += pd1[i-j];
            if (pd1[i] >= 1000000007)
                pd1[i] -= 1000000007;
       //     cout << "PD1[" << i << "] " << pd1[i] << endl;
        }
        minj = min(i, k);
        //cout << pd2[i] << endl;
        for (int j = 1; j <= minj; ++j)
        {
       // cout << "I: " <<  i - j << endl;
            pd2[i] += pd2[i-j];
            if (pd2[i] >= 1000000007)
                pd2[i] -= 1000000007;
        }
        for (int j = d; j <= minj; ++j)
        {
            pd2[i] += pd1[i-j];
            if (pd2[i] >= 1000000007)
                pd2[i] -= 1000000007;
        }
    }
    cout << pd2[n] << endl;
}

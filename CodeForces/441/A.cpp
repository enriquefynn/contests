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
    int p, l, n, k;
    cin >> n >> k;
    vector<int> outb;
    forid(n)
    {
        bool f = false;
        cin >> p;
        forjd(p)
        {
            cin >> l;
            if (!f && (l + 1) <= k)
            {
                outb.push_back(i+1);
                f = true;
            }
        }
    }
    cout << outb.size() << endl;
    sort(outb.begin(), outb.end());
    forid(outb.size())
        cout << outb[i] << ' ';
    cout << endl;
}


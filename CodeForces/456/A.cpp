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
    vector<pair<int, int> > v;
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        v.push_back(make_pair(b, a));
    }
    sort(v.begin(), v.end());
    bool fl = false;
    for (int i = 1; i < n; ++i)
    {
        if (v[i-1].first == v[i].first)
            continue;
        if (v[i-1].second > v[i].second)
        {
            fl = true;
            break;
        }
    }
    if (fl)
        cout << "Happy Alex\n";
    else
        cout << "Poor Alex\n";
}

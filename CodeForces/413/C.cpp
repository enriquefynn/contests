#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
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
    long long n, m, a, v[101];
    cin >> n >> m;
    vector<long long> ac, vi;
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    long long score = 0;
    for (int i = 1; i <=m; ++i)
    {
        cin >> a;
        ac.push_back(v[a]);
        v[a] = -1;
    }
    for (int i = 1; i <= n; ++i)
        if (v[i] != -1)
        {
            vi.push_back(v[i]);
            score+=v[i];
        }
    sort(ac.rbegin(), ac.rend());
    for (int i = 0; i < ac.size(); ++i)
        score+=max(score, ac[i]);
    cout << score << endl;
}










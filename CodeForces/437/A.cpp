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
    string s[4];
    int mini, maxi;
    bool f, h;
    char ans = 'C';
    f = h = false;
    mini = maxi = 0;
    forid(4)
    {
        cin >> s[i];
        if (s[i].size() < s[mini].size())
            mini = i;
        if (s[i].size() > s[maxi].size())
            maxi = i;
    }
    int i;
    fori(4)
    {
        if (i == mini)
            continue;
        if (s[mini].size()-2 > (s[i].size()-2)/2)
            break;
    }
    if (i == 4)
    {
        f = true;
        ans = s[mini][0];
    }

    fori(4)
    {
        if (i == maxi)
            continue;
        if (s[maxi].size()-2 < (s[i].size()-2)*2)
            break;
    }
    if (i == 4)
    {
        if (f)
            ans = 'C';
        else
            ans = s[maxi][0];
    }
    cout << ans << endl;
}

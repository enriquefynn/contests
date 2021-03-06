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
    const string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char, char> mr;
    map<char, char> ml;
    for (int i = 1; i < s.size(); ++i)
        mr[s[i]] = s[i-1];
    for (int i = 0; i < s.size()-1; ++i)
        ml[s[i]] = s[i+1];
    char c;
    string ss;
    cin >> c;
    cin >> ss;
    if (c == 'R')
        forid(ss.size())
            ss[i] = mr[ss[i]];
    else if (c == 'L')
        forid(ss.size())
            ss[i] = ml[ss[i]];
    cout << ss << endl;
    return 0;
}

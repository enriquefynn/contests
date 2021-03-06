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
    int a1, a2, a3, a4;
    string s;
    map<int, int> m;
    cin >> a1 >> a2 >> a3 >> a4;
    m[1] = a1;
    m[2] = a2;
    m[3] = a3;
    m[4] = a4;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.size(); ++i)
        c+= m[(s[i]-'0')];
    cout << c << endl;
}

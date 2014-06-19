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
    string str;
    string tand;
    int n;
    cin >> str;
    int i;
    for (i = 0; i < str.size(); ++i)
        if (str[i] == str[str.size()-1])
            break;
    cin >> n;
    tand = str;
    for (int j = 1; j <= n; ++j)
        tand = tand + str[i+j];
    int len = 0;
    cout << i << endl << tand << endl;
    for (int j = 0; j < tand.size()/2; ++j)
        if (tand[i+j] == tand[j+str.size()-1])
            ++len;
    cout << 2*len << endl;
}

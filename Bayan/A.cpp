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
    int n;
    char v[3][11];
    char yo = '#';
    forid(3)
        forjd(11)
            v[i][j] = '#';
    cin >> n;
    int c = 0;
    int ci[3] = {0, 0, 0};
    forid(n)
    {
        if (i == 2)
        {
            yo = 'O';
            continue;
        }
        v[c][ci[c]++] = 'O';
        ++c;
        c%=3;
    }
    cout << "+------------------------+\n|";
    for (int i = 0; i < 11; ++i)
        cout << v[0][i] << '.';
    cout << "|D|)\n|";
    for (int i = 0; i < 11; ++i)
        cout << v[1][i] << '.';
    cout << "|.|\n|";
    cout << yo;
    cout << ".......................|\n|"; 
    for (int i = 0; i < 11; ++i)
        cout << v[2][i] << '.';
    cout << "|.|)\n+------------------------+\n";
    return 0;
}

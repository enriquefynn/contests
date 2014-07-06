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


string news[1000];

int n, m;
void print(int i, int j, char c)
{
    if (i > n || i < 0 || j > m || j < 0)
        return;
    if (news[i][j] == 'B' || news[i][j] == 'W')
        return;
    if (news[i][j] == '-')
        return;
    char p;
    if (c == 'B')
        p = 'W';
    else
        p = 'B';
    news[i][j] = c;
    print(i-1, j-1, c);
    print(i-1, j, p);
    print(i-1, j+1, c);
    print(i, j-1, p);
    print(i, j+1, p);
    print(i+1, j-1, c);
    print(i+1, j, p);
    print(i+1, j+1, c);
}


int main()
{
    cin >> n >> m;
    string str[1000];
    forid(n)
        cin >> str[i];
    char c = 'B';
    forid(n)
    {
        news[i] = "";
        forjd(m)
            news[i] = news[i] + str[i][j];
    }
    forid(n)
    {
        forjd(m)
            if (news[i][j] == '.')
                print(i, j, 'B');
    }
    forid(n)
        cout << news[i] << endl;
}

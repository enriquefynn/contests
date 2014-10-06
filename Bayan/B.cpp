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

int v[21][21];
int n, m;

bool visi[21][21];

void all(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return;
    if (visi[i][j])
        return;
    visi[i][j] = true;
    if (v[i][j] & 1u)
        all(i, j-1);
    else
        all(i, j+1);
    if (v[i][j] & 2u)
        all(i-1, j);
    else
        all(i+1, j);
}

int main()
{
    string s1, s2;
    cin >> n >> m >> s1 >> s2;
    forid(n)
    {
        forjd(m)
        {
            if (s1[i] == '>')
                v[i][j] = 0;
            else
                v[i][j] = 1;
        }
    }
    forjd(m)
    {
        forid(n)
        {
            if (s2[j] == 'v')
            {
                if (!v[i][j])
                    v[i][j] = 0;
                else
                    v[i][j] = 1;
            }
            else
            {
                if (!v[i][j])
                    v[i][j] = 2;
                else
                    v[i][j] = 3;
            }
        }
    }
    /*forid(n)
    {
        forjd(m)
            cout << v[i][j] << ' ';
        cout << endl;
    }*/

    forid(n)
    {
        forjd(m)
        {
            for (int q = 0; q < n; ++q)
                for(int w = 0; w < m; ++w)
                    visi[q][w] = false;
            /*for(int k = 0; k < n; ++k)
            {
                for(int l = 0; l < m; ++l)
                    cout << visi[k][l] << ' ';
                cout << endl;
            }*/
            all(i, j);
            //cout << endl;
            for(int k = 0; k < n; ++k)
                for (int l = 0; l < m; ++l)
                {
                    if (!visi[k][l])
                    {
                        cout << "NO\n";
                        return 0;
                    }
                }
        }
    }

    cout << "YES\n";
    return 0;
}

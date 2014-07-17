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

string a, b;
int main()
{
    cin >> a >> b;
    int pos = -1;
    bool ok = true;
    for (int i = 0; ok && i != b.size() ; ++i) {
        ok = (pos = a.find(b[i], pos+1)) != string::npos;
    }
    if (ok)
        cout << "automaton\n";
    else
    {
        int map1[30], map2[30];
        for (int i = 0; i < 30; ++i)
            map1[i] = map2[i] = 0;
        for (int i = 0; i < a.size(); ++i)
            map1[a[i]-'a']++;
        for (int i = 0; i < b.size(); ++i)
            map2[b[i]-'a']++;
        int i;
        for (i = 0; i < 30; ++i)
            if (map1[i] != map2[i])
                break;
        if (i == 30)
            cout << "array\n";
        else
        {
            for (i = 0; i < b.size(); ++i)
                if ((map2[b[i]-'a'] > 0) && (map1[b[i]-'a'] == 0))
                    break;
            if ((i == b.size()) && (b.size() <= a.size()))
                cout << "both\n";
            else
                cout << "need tree\n";
        }
    }
}

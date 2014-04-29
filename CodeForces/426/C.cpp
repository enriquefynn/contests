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
    vector<int> a, b;
    int n, swaps, v[1000], soma;
    cin >> n >> swaps;
    bool nega = false;
    soma = 0;
    forid(n)
    {
        cin >> v[i];
        if (v[i] < 0)
            nega = true;
        soma+= v[i];
    }
    if (!nega)
    {
        cout << soma << endl;
        return 0;
    }
    int an = -1000000;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            a.clear();
            b.clear();
            for (int k = 0; k < i; ++k) a.push_back(v[k]);
            for (int k = j+1; k < n; ++k) a.push_back(v[k]);
            for (int k = i; k <= j; ++k) b.push_back(v[k]);
            sort(a.rbegin(), a.rend());
            sort(b.begin(), b.end());
            int s = 0;
            int swp = 0;
            for (int k = 0; k < b.size(); ++k)
            {
                int c = b[k];
                if (swp < a.size() && swp < swaps && a[swp] > c)
                    c = a[swp++];
                s+=c;
            }
            an = max(an, s);
        }
    }
    cout << an << endl;

}






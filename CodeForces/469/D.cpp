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
#define x first
#define y second

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

vector<int> unf;

int find(int el)
{
    if (unf[el] == el)
        return el;
    return unf[el] = find(unf[el]);
}

void uni(int s1, int s2)
{
    int a = find(s1);
    int b = find(s2);
    if (a != b)
        unf[b] = a;
}

set<int> s;
map<int, int> m;
int v[100001];
int main()
{
    int n, a, b, aux;
    cin >> n >> a >> b;
    forid(n)
    {
        cin >> aux;
        unf.push_back(i);
        s.insert(aux);
        v[i] = aux;
        m[aux] = i;
    }
    unf.push_back(n);
    unf.push_back(n+1);
    int va, vb;
    forid(n)
    {
        va = a - v[i];
        vb = b - v[i];
        if (s.count(va))
        {
            uni(m[v[i]], m[va]);
        }
        else
            uni(m[v[i]], n);

        if (s.count(vb))
        {
            uni(m[v[i]], m[vb]);
        }
        else
            uni(m[v[i]], n+1);
      //  for (int i = 0; i < n+2; ++i)
      //      cout << unf[i] << ' ';
      //  cout << endl;
    }
    if (find(n) == find(n+1))
        cout << "NO";
    else
    {
        cout << "YES\n";
        forid(n)
        {
            cout << (find(m[v[i]]) == find(n)) << ' ';
        }
    }
    cout << endl;
    return 0;
}

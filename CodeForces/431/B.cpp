#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <list>
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

int order[] = {0,1,2,3,4};
int m[5][5];

int main()
{
    for(int i = 0; i < 5; ++i)
        for(int j = 0; j < 5; ++j)
            cin >> m[i][j];
    int hm = m[order[1]][order[2]] + m[order[2]][order[1]] + m[order[4]][order[0]] + m[order[0]][order[4]] + m[order[2]][order[0]] + m[order[0]][order[2]] + m[order[3]][order[4]] + m[order[4]][order[3]] + m[order[0]][order[4]] + m[order[4]][order[0]] + m[order[3]][order[4]] + m[order[4]][order[3]];
    while(next_permutation(order, order+5))
    {
        hm = max(hm, m[order[1]][order[2]] + m[order[2]][order[1]] + m[order[4]][order[0]] + m[order[0]][order[4]] + m[order[2]][order[0]] + m[order[0]][order[2]] + m[order[3]][order[4]] + m[order[4]][order[3]] + m[order[0]][order[4]] + m[order[4]][order[0]] + m[order[3]][order[4]] + m[order[4]][order[3]]);
    }
    cout << hm << endl;
}

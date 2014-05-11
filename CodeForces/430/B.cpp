#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#define EPS 0.0000000000000001
#define fori(N) for(i = 0; i < N; ++i)
#define forid(N) for(int i = 0; i < N; ++i)
#define forj(N) for(j = 0; j < N; ++j)
#define forjd(N) for(int j = 0; j < N; ++j)

using namespace std;

int sim(vector<int> v, int pos, int elem)
{
    vector<int> vcp;
    for (int i = 0; i < pos; ++i)
        vcp.push_back(v[i]);
    vcp.push_back(elem);
    for (int i = pos; i < v.size(); ++i)
        vcp.push_back(v[i]);
    vector<int> vvcp;
    while(1)
    {
        vvcp.clear();
        int c = 0;
        for (int i = 0; i < vcp.size(); ++i)
        {
            if (i > 0 && vcp[i] == vcp[i-1])
                ++c;
            else
            {
                if (c >= 2)
                    for (int j = 0; j <= c; ++j)
                        vvcp.pop_back();
                c = 0;
            }
            vvcp.push_back(vcp[i]);
        }
        if (c >= 2)
            for (int j = 0; j <= c; ++j)
                vvcp.pop_back();

        if (vvcp == vcp)
            break;
        else
            vcp = vvcp;
    }
    return vvcp.size();
}


int main()
{
    int n, k, x, aux;
    cin >> n >> k >> x;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        cin >> aux;
        v.push_back(aux);
    }
    int ma = 100000000;
    ma = sim(v, 0, x);
    for (int i = 0; i < n; ++i)
        ma = min(ma, sim(v, i, x));
    if (ma > v.size())
        ma = v.size();
    cout << v.size() - ma << endl;
}







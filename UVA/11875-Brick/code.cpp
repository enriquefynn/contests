#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#define EPS 0.0000000000000001
#define fori(N) for(i = 0; i < N; ++i)
#define forid(N) for(int i = 0; i < N; ++i)
#define forj(N) for(j = 0; j < N; ++j)
#define forjd(N) for(int j = 0; j < N; ++j)

using namespace std;

struct pto
{
	double x;
	double y;
	pto(){}
	pto(double _x, double _y){ x = _x; y = _y;}
};

main()
{
	int T, aux, N;
	vector<int> v;
	cin >> T;
	forid(T)
	{
		v.clear();
		cout << "Case " << i+1 << ": ";
		cin >> N;
		forjd(N)
		{
			cin >> aux;
			v.push_back(aux);
		}
		sort(v.begin(), v.end());
		cout << v[v.size()/2] << endl;
	}
}








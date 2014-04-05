#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
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
	int N;
	double n;
	cin >> N;
	while(N--)
	{
		cin >> n;
		int a1 = (-1 + sqrt(1.+8.*n))/2.;
		cout << a1 << endl;
	}
}












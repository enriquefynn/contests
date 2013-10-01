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
	int a, b, c = 1;
beg:	while(1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		cout << "Case " << c++ << ": ";
		for (int i = 1; i <= 27; ++i)
		{
			if (b*i >= a)
			{
				cout << i - 1 << endl;
				goto beg;
			}
		}
		cout << "impossible\n";
	}
	return 0;
}











#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

main()
{
	unsigned long long n, m;
	while(cin >> n >> m)
	{
		cout << llabs(n - m) << endl;
	}
}

#include <iostream>
using namespace std;

main()
{
	int N, k, i, t, l, h, c, p;
	cin >> N;
	c = 0;
	while(N--)
	{
		l = h = 0;
		cin >> p >> k;
		for (i = 0; i < p-1; ++i)
		{
			cin >> t;
			if (t > k)
				++l;
			else if (t < k)
				++h;
			k = t;
		}
		cout << "Case " << ++c << ": " << l << ' ' << h << endl;
	}
}

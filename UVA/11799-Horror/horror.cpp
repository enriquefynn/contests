#include <iostream>
using namespace std;

main()
{
	int N, maxim, c = 1, p, i, h;
	cin >> N;
	while(N--)
	{
		maxim = 0;
		cin >> p;
		for (i = 0; i < p; ++i)
		{
			cin >> h;
			if (h > maxim)
				maxim = h;
		}
		
		cout << "Case " << c++ << ": " << maxim << endl;
	}
}

#include <iostream>
using namespace std;

int K, i, X, Y, x, y;

main()
{
	while(1)
	{
		cin >> K;
		if (!K)
			break;
		cin >> X >> Y;
		for (i = 0; i < K; ++i)
		{
			cin >> x >> y;
			if ((x == X) || (y == Y))
				cout << "divisa\n";
			else if (y > Y)
			{
				if (x > X)
					cout << "NE\n";
				else
					cout << "NO\n";
			}
			else
			{
				if (x > X)
					cout << "SE\n";
				else
					cout << "SO\n";
			}
		}
	}
	return 0;
}

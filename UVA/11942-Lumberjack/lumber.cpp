#include <iostream>
using namespace std;

int v[10], i, N;
bool ord;
main()
{
	cin >> N;
	cout << "Lumberjacks:\n";
	while(N--)
	{
		ord = true;
		for (i = 0; i < 10; ++i)
			cin >> v[i];
		for (i = 0; i < 9; ++i)
			if (v[i] > v[i+1])
				ord = false;
		if (!ord)
		{
			ord = true;
			for (i = 9; i > 0; --i)
				if (v[i] > v[i-1])
					ord = false;
		}
		if (ord)
			cout << "Ordered\n";
		else
			cout << "Unordered\n";
	}
}

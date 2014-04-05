#include <iostream>
using namespace std;
main()
{
	int N, B, H, W, h, l, i, j, p, k;
	bool f;
	int min;
	while(cin >> N >> B >> H >> W)
	{
		k = 10000000;
		for (i = 0; i < H; ++i)
		{
			f = true;
			cin >> h;
			for (j = 0; j < W; ++j)
			{
				cin >> l;
				if (l < N)
					f = false;
			}
			if (f)
			{
				if (h*N < k)
					k = h*N;
			}
		}
		if (k > B)
			f = false;
		if (f)
			cout << k << endl;
		else
			cout << "stay home\n";
	}
}


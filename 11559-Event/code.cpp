#include <iostream>
#include <climits>
using namespace std;
main()
{
	int priceM, N, B, H, W, price, w;
	while(cin >> N >> B >> H >> W)
	{
		priceM = INT_MAX;
		for (int i = 0; i < H; ++i)
		{
			cin >> price;
			for (int j = 0; j < W; ++j)
			{
				cin >> w;
				if (w >= N && price*N <= priceM) priceM = price*N;
			}
		}
		if (priceM <= B)
			cout << priceM << endl;
		else
			cout << "stay home\n";
	}
}

#include <iostream>
using namespace std;

int N, i, maxm, maxi, c = 0;
pair<string, int> p[10];
main()
{
	cin >> N;
	while(N--)
	{
		cin >> p[0].first >> p[0].second;
		maxm = p[0].second;
		maxi = 0;
		for (i = 1; i < 10; ++i)
		{
			cin >> p[i].first >> p[i].second;
			if (p[i].second > maxm)
			{
				maxm = p[i].second;
				maxi = i;
			}
		}
		cout << "Case #" << ++c << ":\n";
		for (i = 0; i < 10; ++i)
		{
			if (p[i].second == maxm)
				cout << p[i].first << endl;
		}
	}
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
main()
{
	cin >> N;
	int q,w,e;
	vector<int> v(3);
	int c = 0;
	while(N--)
	{
		cin >> q >> w >> e;
		v[0] = q;
		v[1] = w;
		v[2] = e;
		sort(v.begin(), v.end());
		cout << "Case " << ++c << ": " << v[1] << endl;
	}
}

#include <iostream>
#include <sstream>
using namespace std;

string int2str(int n)
{
	stringstream ss;
	ss << n;
	return ss.str();
}
main()
{
	int t, n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		n = ((((((n*567)/9) + 7492) * 235)/47)-498);
		string s = int2str(n);
		cout << s[s.size()-2] << endl;
	}
}

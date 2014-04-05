#include <iostream>
#include <map>
using namespace std;

main()
{
	string p, s;
	int n;
	map<string, string> mapa;
	map<string, int> pai; 
	cin >> n;
	while(n--)
	{
		cin >> p;
		getline(cin, s);
		pai[p]++;
	}
	for (map<string, int>:: iterator it = pai.begin(); it != pai.end(); ++it)
		cout << it->first << ' ' << it->second << endl;
}

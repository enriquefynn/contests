#include <iostream>
#include <set>
using namespace std;

main()
{
	set<char> sc;
mai:	
	while(1)
	{
		sc.clear();
		bool found;
		string s, g;
		int n;
		cin >> n;
		if (n == -1)
			break;
		cout << "Round " << n << endl;
		cin >> s >> g;
		for (int i = 0; i < s.size(); ++i)
			sc.insert(s[i]);
		int count = 0;
		for (int i = 0; i < g.size(); ++i)
		{
			found = false;
			if (sc.find(g[i]))
			{
				for (set<char>::iterator k = sc.begin; k != sc.end(); k++)
				{
					sc.erase(*k);
					break;
				}
				if (sc.empty())
					goto win;
			}
		}
		if (!found)
			++count;
		if (count == 7)
			cout << "You lose.\n";
		else
		{
			for (int i = 0; i < s.size(); ++i)
				if (s[i] != '-')
				{
					cout << "You chickened out.\n";
					goto mai;
				}
win:			cout << "You win.\n";
		}
	}	
}




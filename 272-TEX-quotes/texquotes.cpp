#include <iostream>
#include <cstdio>
using namespace std;

main()
{
	int i;
	char s;
	bool f = true;
	while(scanf("%c", &s) != EOF)
	{
		if (s == '\"')
		{
			if (f)
				cout << "\`\`";
			else
				cout << "\'\'";
			f = !f;
		}
		else
			cout << s;
	}
}

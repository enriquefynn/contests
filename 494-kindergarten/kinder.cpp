#include <iostream>
#include <cstdio>
using namespace std;


main()
{
	char s;
	int n = 0;
	int i;
	bool word = true;
	while(scanf("%c", &s) != EOF)
	{
		if (word)
		{
			if (isalpha(s))
			{
				++n;
				word = false;
			}
		}
		else
		{
			if (!isalpha(s))
				word = true;
		}
		if (s == '\n')
		{
			cout << n << endl;
			n = 0;
		}
	}
}

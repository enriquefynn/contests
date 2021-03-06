#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int u[26] = {0};
int l[26] = {0};
char a;
int i;
int gll, guu;
set<char> print;

main()
{
	while(scanf("%c", &a) == 1)
	{
		if (isalpha(a))
		{
			if (islower(a))
				++l[(int) a - 'a'];
			else
				++u[a - 'A'];
		}
		
		else if (a == '\n')
		{
			int gu = u[0];
			int giu = 0;
			int gl = l[0];
			int gil = 0;
			for (i = 1; i < 26; ++i)
			{
				if (u[i] > gu)
				{
					giu = i;
					gu = u[i];
				}
			}
			for(i = 1; i < 26; ++i)
			{
				if (l[i] > gl)
				{
					gil = i;
					gl = l[i];
				}
			}
			if (gl > gu)
			{
				for (i = 0; i < 26; ++i)
				{
					if (l[i] == gl)
						print.insert('a' + i);
				}
				
				for (set<char>::iterator it = print.begin(); it != print.end(); ++it)
					cout << *it;
				cout << ' ' << gl << endl;
			}
			else if (gu > gl)
			{
				for (i = 0; i < 26; ++i)
				{
					if (u[i] == gu)
						print.insert('A' + i);
				}

				for (set<char>::iterator it = print.begin(); it != print.end(); ++it)
					cout << *it;
				cout << ' ' << gl << endl;
			}
			else
			{
				for (i = 0; i < 26; ++i)
					if(u[i] != 0)
						break;
				if (i == 26)
					goto end;
				for (i = 0; i < 26; ++i)
				{
					if (u[i] == gu)
						print.insert('A' + i);
				}

				for (set<char>::iterator it = print.begin(); it != print.end(); ++it)
					cout << *it;
				print.clear();
				for (i = 0; i < 26; ++i)
				{
					if (l[i] == gl)
						print.insert('a' + i);
				}

				for (set<char>::iterator it = print.begin(); it != print.end(); ++it)
					cout << *it;
				cout << ' ' << gl << endl;
			}
end:
			memset(u, 0, 26*sizeof(int));
  		memset(l, 0, 26*sizeof(int));
  		print.clear();
		}
	}
	return 0;
}





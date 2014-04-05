#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<char> str;
pair<str, bool> palavras[1000];

str vord[1000];
string s;
main()
{
	int i = 0, j;
	while(1)
	{
		cin >> s;
		if (palavras[i].first[0] == '#')
			break;
		for (j = 0;j < s.size(); ++j)
		{
			palavras[i].first.push_back(s[j]);
			vord[i].push_back(s[j]);
		}
		sort(vord[i].begin(), vord[i].end());
		++i;
	}
	for (i = 0; i < palavras.size(); ++i)
	{
		for (j = i+1; j < palavras.size(); ++j)
		{
			for (k = 0; k < palavras[i].size(); ++k
			if (vord[
		}
	}
}

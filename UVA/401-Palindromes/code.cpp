#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#define EPS 0.0000000000000001
#define fori(N) for(i = 0; i < N; ++i)
#define forid(N) for(int i = 0; i < N; ++i)
#define forj(N) for(j = 0; j < N; ++j)
#define forjd(N) for(int j = 0; j < N; ++j)

using namespace std;

int gcd(int a, int b) {return (b = 0 ? a : gcd(b, a%b));}
int lcm(int a, int b) {return (a * (b / gcd(a, b))); }

struct pto
{
	double x;
	double y;
	pto(){}
	pto(double _x, double _y){ x = _x; y = _y;}
};

main()
{
	map<char, char> M;
	M['A'] = 'A';
	M['E'] = '3';
	M['H'] = 'H';
	M['I'] = 'I';
	M['J'] = 'L';
	M['L'] = 'J';
	M['M'] = 'M';
	M['O'] = 'O';
	M['0'] = 'O';
	M['S'] = '2';
	M['T'] = 'T';
	M['U'] = 'U';
	M['V'] = 'V';
	M['W'] = 'W';
	M['X'] = 'X';
	M['Y'] = 'Y';
	M['Z'] = '5';
	M['1'] = '1';
	M['2'] = 'S';
	M['3'] = 'E';
	M['5'] = 'Z';
	M['8'] = '8';

	string s;
	bool pal, mirr;
	while(cin >> s)
	{
		pal = mirr = true;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] != s[s.size()-i-1])
			{
				pal = false;
				break;
			}
		}
		string l;
		string p = s;
		forid(s.size())
		{
			p[i] = M[s[i]];
		};
		l = "";
		if (p.size() != s.size())
			mirr = false;
		else
			for (int i = p.size()-1; i >=0; --i)
			{
				
				if (p[i] != s[i-p.size()])
				{
					mirr = false;
					break;
				}
			}
		cout << "P: " << p << endl;
		cout << "l: " << l << endl;
		if (!mirr && !pal)
			cout << s << " -- is not a palindrome.\n\n";
		else if (pal && !mirr)
			cout << s << " -- is a regular palindrome.\n\n";
		else if (!pal && mirr)
			cout << s << " -- is a mirrored string.\n\n";
		else
			cout << s << " -- is a mirrored palindrome.\n\n";
	}
}




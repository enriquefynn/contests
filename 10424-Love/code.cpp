#include <iostream>
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
	char s[10000], s2[10000];
	string soma1, soma2;
	while(1)
	{
		if (!gets(s))
			break;
		gets(s2);
		soma1 = "";
		for (int i = 0; s[i] != '\0'; ++i)
		{
			s[i] = tolower(s[i]);
			if ((s[i] >= 'a') && (s[i] <= 'z'))
			{
				soma1+= (s[i]+1-'a'+'0');
				}
		}
		while(soma1.size() != 1)
		{
			int aux = 0;
			for (int i = 0; i < soma1.size(); ++i)
				aux+=soma1[i]-'0';
			soma1 = "";
			while(aux != 0)
			{
				soma1+= (aux%10 + '0');
				aux/=10;
			}
		}
		soma2 = "";
		for (int i = 0; s2[i] != '\0'; ++i)
		{
			s2[i] = tolower(s2[i]);
			if ((s2[i] >= 'a') && (s2[i] <= 'z'))
				soma2+= (s2[i]+1-'a'+ '0');
		}
		while(soma2.size() != 1)
		{
			int aux = 0;
			for (int i = 0; i < soma2.size(); ++i)
				aux+=soma2[i]-'0';
			soma2 = "";
			while(aux != 0)
			{
				soma2+= (aux%10 + '0');
				aux/=10;
			}
		}

		if (soma1 < soma2)
			swap(soma1, soma2);
		printf("%.2f %%\n", (((float)soma2[0]-'0')/((float)soma1[0]-'0'))*100 );
	}
}

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <bitset>
#define EPS 0.0000000000000001
#define fori(N) for(i = 0; i < N; ++i)
#define forid(N) for(int i = 0; i < N; ++i)
#define forj(N) for(j = 0; j < N; ++j)
#define forjd(N) for(int j = 0; j < N; ++j)
#define ll long long
#define vi vector<int>
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

vi primes;

ll _sieve_size;
bitset<10000010> bs;

void sieve(ll upp)
{
	_sieve_size = upp+1;
	bs.set();
	bs[0] = bs[1] = 0;
	for (ll i = 2; i <= _sieve_size; ++i)
		if (bs[i])
		{
			for (ll j = i*i; j <= _sieve_size; j += i)
				bs[j] = 0;
			primes.push_back((int) i);
		}
}

vi primeFactors(ll N)
{
	vi factors;
	ll PF_idx = 0, PF = primes[PF_idx];
	while(N != 1 && (PF*PF <=N))
	{
		while(N%PF == 0)
		{
			N /= PF;
			factors.push_back(PF);
		}
		PF = primes[++PF_idx];
	}
	if (N != 1)
		factors.push_back(N);
	return factors;
}

main()
{
	sieve(100000);
	for (int i = 0; i < primes.size(); ++i)
		cout << ", " << primes[i];
	int i;
	ll N;
	vi res;
	bool n;
	while(1)
	{
		i = 1;
		n = false;
		scanf("%lld", &N);
		if (!N)
			return 0;
		printf("%lld = ", N);
		if (N < 0)
		{
			i = 0;
			n = true;
			N = -N;
		}
		res = primeFactors(N);
		if (n)
			printf("-1");
		else
			printf("%d", res[0]);
		for(; i < res.size(); ++i)
			printf(" x %d", res[i]);
		printf("\n");
}








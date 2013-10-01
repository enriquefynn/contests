#include <iostream>
using namespace std;

int i, N, A, L, E, T, F;
int sa;
main()
{
	int aux;
	cin >> N;
	while(N--)
	{
		cin >> F;
		T = 0;
		for (i = 0; i < F; ++i)
		{
			cin >> L >> A >> E;
			T += L*E;
		}
		cout << T << endl;
	}
}

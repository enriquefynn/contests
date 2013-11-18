#include <iostream>
#include <vector>
#include <stack>
#include <bitset>
using namespace std;
vector<int> graph[10000];
bitset<1000> visitado;
stack<int> reverse;

void dfs(int v)
{
	if (visitado[v])
		return;
	visitado[v] = true;
	for (int i = 0; i < graph[v].size(); ++i)
	if (!visitado[graph[v][i]])
		dfs(graph[v][i]);
	reverse.push(v);
}

main()
{
	int v, n, x, y;
	while(1)
	{
	visitado = 0;
	cin >> v >> n;
	for (int i = 1; i <= v; ++i)
		graph[i].clear();
	if (!v && !n)
		break;
	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;
		graph[x].push_back(y);
	}
	for (int i = 1; i <= v; ++i)
	{
		if (!visitado[i])
			dfs(i);
	}
	while(1)
	{
		if (reverse.size() == 1)
		{
			cout << reverse.top();
			reverse.pop();
			break;
		}
		else
			cout << reverse.top() << ' ';
		reverse.pop();
	}
	cout << endl;
	}
	return 0;
}

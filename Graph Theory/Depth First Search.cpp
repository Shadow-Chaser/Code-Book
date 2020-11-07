#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define MX 100

vector <int> g[MX];
bool vis[MX];


void dfs(int source)
{
	vis[source] = 1;
	for (int i = 0; i < g[source].size(); i++)
	{
		int next = g[source][i];
		if (vis[next] == 0)
			dfs(next);
	}
}


int main()
{

	int nodes, edges;
	cin >> nodes >> edges;

	for (int i = 1; i <= edges; i++)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	int s;
	cin >> s;
	dfs(s);

	for (int i = 1; i <= nodes; i++)
	{
		if (vis[i] == 1)
		{
			cout << "Node " << i << " is visited." << endl;

		}
		else
		{
			cout << "Node " << i << " is not visited" << endl;
		}
	}

	return 0;
}
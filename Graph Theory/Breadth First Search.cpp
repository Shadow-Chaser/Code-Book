#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define MX 100

vector <int> g[MX];
bool vis[MX];
int dis[MX];

void bfs(int source)
{
	queue <int> q;
	vis[source] = 1;
	dis[source] = 0;
	q.push(source);

	while (!q.empty())
	{
		int k = q.front();
		q.pop();

		for (int i = 0; i < g[k].size(); i++)
		{
			int next = g[k][i];
			if (vis[next] == 0)
			{
				vis[next] = 1;
				dis[next] = dis[k] + 1;
				q.push(next);
			}
		}
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
	bfs(s);

	cout << "From Node " << s << "\n";
	for (int i = 1; i <= nodes; i++)
		cout << "Distance of " << i << " is: " << dis[i] << "\n";

	return 0;
}
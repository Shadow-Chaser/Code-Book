#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector <int> g[100];

void printGraph(vector<int>graph[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i << " -> ";
		for (int j = 0; j < graph[i].size(); j++)
			cout << graph[i][j] << " ";
		cout << "\n";
	}

}

int main()
{

	int nodes, edges;
	cin >> nodes >> edges;

	for (int i = 0; i < edges; i++)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	printGraph(g, nodes);

	return 0;
}
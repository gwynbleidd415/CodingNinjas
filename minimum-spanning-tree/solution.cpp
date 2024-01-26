#include <queue>

int solution1(int n, vector<vector<int>> &edges) {
	vector<vector<pair<int, int>>> adj(n);
	bool s1{true};
	for(vector<int> &edge:edges) {
		if(edge[0] == 0 || edge[1] == 0) {
			s1 = false;
			break;
		}
	}
	for(vector<int> &edge:edges) {
		if(s1) --edge[0], --edge[1];
		adj[edge[0]].push_back({edge[1], edge[2]});
		adj[edge[1]].push_back({edge[0], edge[2]});
	}
	vector<bool> visited(n, false);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({0, 0});
	pair<int, int> top;
	int mst{0};
	while(!pq.empty()) {
		top = pq.top(), pq.pop();
		if(visited[top.second]) continue;
		visited[top.second] = true;
		mst += top.first;
		for(pair<int, int> edge: adj[top.second]) {
			if(visited[edge.first]) continue;
			pq.push({edge.second, edge.first});
		}
	}
	return mst;
}

int kruskalMST(int n, vector<vector<int>> &edges)
{
	// Write your code here.
	return solution1(n, edges);
}

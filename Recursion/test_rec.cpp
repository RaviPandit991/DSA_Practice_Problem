#include <bits/stdc++.h>
using namespace std;

int main() {
    int vertices = 6;
    vector<vector<pair<int, int>>> adj(vertices);

    auto addEdge = [&](int u, int v, int weight) {
        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight});
    };

    addEdge(0, 1, 4);
    addEdge(0, 2, 3);
    addEdge(1, 2, 1);
    addEdge(1, 3, 2);
    addEdge(2, 3, 4);
    addEdge(3, 4, 2);
    addEdge(4, 5, 6);

    vector<bool> visited(vertices, false);
    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>>
        minHeap;

    int start = 0;
    minHeap.push({0, start});
    int minimumCost = 0;

    cout << "Edges in the MST:\n";

    while (!minHeap.empty()) {
        pair<int, int> current = minHeap.top();
        minHeap.pop();

        int weight = current.first;
        int node = current.second;

        if (visited[node]) {
            continue;
        }

        visited[node] = true;
        minimumCost += weight;

        if (node != start) {
            cout << node << " - " << weight << '\n';
        }

        for (const pair<int, int>& edge : adj[node]) {
            int neighbour = edge.first;
            int edgeWeight = edge.second;

            if (!visited[neighbour]) {
                minHeap.push({edgeWeight, neighbour});
            }
        }
    }

    cout << "Minimum cost: " << minimumCost << '\n';
    return 0;
}
// 1) Implement prims algo using greedy approach 
// (If the smallest edge using priority queue) with min_heap'

// Create adjajency list 
// Pick nodes with a priority_queue


#include <iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
    int V = 5;

    vector<vector<pair<int, int>>> adj = {
        {{1, 2}, {3, 6}},       // 0
        {{0, 2}, {2, 3}, {3, 8}}, // 1
        {{1, 3}, {3, 5}, {4, 7}}, // 2
        {{0, 6}, {1, 8}, {2, 5}, {4, 9}}, // 3
        {{2, 7}, {3, 9}}        // 4
    };

    vector<bool> visited(V, false);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, 0});
    int mstWeight = 0;

    while(!pq.empty()) {

        auto [weight, u] = pq.top();
        pq.pop();

        if(visited[u]) continue;

        visited[u] = true;
        mstWeight += weight;

        cout<< u <<" -> "<<weight<<endl;

        for (auto [v, wt] : adj[u]) {
            if(!visited[v]) {
                pq.push({wt, v});
            }
        }
    }

    cout << "MST Weight = " << mstWeight << endl;

    return 0;

}

















































#include <iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
    int V = 5;

    vector<vector<pair<int, int>>> adj = {
        {{1, 2}, {3, 6}},       // 0
        {{0, 2}, {2, 3}, {3, 8}}, // 1
        {{1, 3}, {3, 5}, {4, 7}}, // 2
        {{0, 6}, {1, 8}, {2, 5}, {4, 9}}, // 3
        {{2, 7}, {3, 9}}        // 4
    };

    vector<bool> visited(V, false);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, 0});
    int mstWeight = 0;

    while(!pq.empty()) {

        auto [weight, u] = pq.top();
        pq.pop();

        if(visited[u]) continue;

        visited[u] = true;
        mstWeight += weight;

        cout<< u <<" -> "<<weight<<endl;

        for (auto [v, wt] : adj[u]) {
            if(!visited[v]) {
                pq.push({wt, v});
            }
        }
    }

    cout << "MST Weight = " << mstWeight << endl;

    return 0;

}





// 2) Implement the kruskal's algorithm with greedy approach 
// We pick up smallest edges except the condition they donot form the cycle , therefore sorting so that we can apply condition of not cycle on current picked node
// And use union-find for disjoint set management (Each nodde is considered as disjoint node), unionn is used for merging 

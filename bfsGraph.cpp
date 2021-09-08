class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        vector<int> bfs;
        queue<int> q;
        q.push(0);
        while(!q.empty()) {
            int n = q.front();
            q.pop();
            if(visited[n] == false) {
                bfs.push_back(n);
                visited[n] = true;
                for(int v: adj[n]) { if(visited[v] == false) q.push(v); }
            }
        }
        return bfs;
    }
};
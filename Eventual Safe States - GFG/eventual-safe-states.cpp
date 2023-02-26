//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool check(int u, vector<int> adj[], int vis[], int pathVis[])
    {
        vis[u] = 1;
        pathVis[u] = 1;
        for(auto v : adj[u])
        {
            if(!vis[v])
            {
                if(check(v, adj, vis, pathVis) == true)
                    return true;
            }
            else if(pathVis[v])
                return true;
        }
        pathVis[u] = 0;
        return false;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int> ans;
        int vis[V] = {0};
        int pathVis[V] = {0};
        for(int i = 0; i < V; i++)
        {
            if(check(i, adj, vis, pathVis) == false)
                ans.push_back(i);
        }
        return ans;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends
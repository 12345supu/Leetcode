//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void DFS(vector<vector<int>> adj, int s, bool visited[], int V)
    {
        visited[s] = true;
        for(int i = 0; i < V; i++)
        {
            if(adj[s][i] == 1 && visited[i] == false)
            {
                DFS(adj, i, visited, V);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        int ans = 0;
        bool visited[V] = {false};
        for(int i = 0; i < V; i++)
        {
            if(visited[i] == false)
            {
                DFS(adj, i, visited, V);
                ans++;
            }
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
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends
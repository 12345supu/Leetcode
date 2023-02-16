//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(int u, vector<int> ad[],bool vis[])
    {
        vis[u] = true;
        for(auto v : ad[u])
        {
            if(!vis[v])
            dfs(v, ad, vis);
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        
        vector<int> ad[V];
        for(int i = 0; i < V; i++)
        {
            for(int j = 0; j < V; j++)
            {
                if(adj[i][j] == 1 && i != j)
                {
                    ad[i].push_back(j);
                    ad[j].push_back(i);
                }
                
            }
        }
        int c=0;
        bool vis[V] = {false};
        for(int i = 0; i < V; i++)
        {
            if(!vis[i])
            {
                c++;
                dfs(i,ad,vis);
                
            }
        }
        return c;
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
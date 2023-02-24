//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool dfscheck(int s, int c, vector<int> adj[], int color[])
    {
        color[s] = c;
        for(auto v : adj[s])
        {
            if(color[v] == -1)
            {
                if(dfscheck(v, !c, adj, color) == false) return false;
            }
            else if(color[v] == c)
                return false;
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    int color[V];
	    for(int i = 0; i < V; i++)
	    {
	        color[i] = -1;
	    }
	    for(int i = 0; i < V; i++)
	    {
	        if(color[i] == -1)
	        {
	            if(dfscheck(i, 0, adj, color) == false)
	                return false;
	        }
	    }
	    return true;
	    // Code here
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool check(int s, int V, vector<int>adj[], int color[])
    {
        color[s] = 0;
        queue<int> q;
        q.push(s);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(auto v : adj[u])
            {
                if(color[v] == -1)
                {
                    color[v] = !color[u];
                    q.push(v);
                }
                else if(color[v] == color[u])
                    return false;
            }
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
	            if(check(i, V, adj, color) == false)
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
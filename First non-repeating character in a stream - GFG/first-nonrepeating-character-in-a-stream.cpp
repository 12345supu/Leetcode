//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		  //  Code here
		  string ans = "";
		    queue<int> q;
		    vector<int> mp(26,0);
		    for(auto i : A){
		        mp[i-'a']++;
		        if(mp[i-'a'] ==1){
		            q.push(i);
		        }
		        while(!q.empty() and mp[q.front() - 'a'] > 1){
		            q.pop();
		        }
		        if(!q.empty()){
		            ans += q.front();
		        }
		        else ans += '#';
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
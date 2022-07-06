// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
       vector<int> findTwoElement(int *arr, int n) {
        int a,b;
        sort(arr,arr+n);
        // for(int i=0;i<n;i++)
        //     cout<<arr[i]<<" ";
        vector<int> ans(2,0);
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {    
                ans[0]=arr[i];
                break;
            }
        }
        int j=1;
        for(int i=0;i<n;i++)
        {
            if(ans[0]==j)
            {
                i++;
            }
            if(arr[i]!=j)
            {   
                ans[1]=j;
                break;
            }
            j++;
        }
        if(ans[1]==0)
            ans[1]=n;
        return ans;
        // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
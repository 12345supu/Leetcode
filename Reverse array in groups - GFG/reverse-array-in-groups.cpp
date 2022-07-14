// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
         int i=0;
           int s = i;  // initialising start ..
           int e = i + k-1;  // initialilsing end..
           
          while(i+k<=n ){
          
              swap(arr[s],arr[e]);
              s++;
              e--;
           
           // incrementation step...   
           if(s>e){ 
               i += k;
               s = i;
               e = i + k-1;
                  
               }
           
           }
           
           // after the groups of k..
           s = i;
           e = n-1;
           while(s<=e){
               swap(arr[s],arr[e]);
               s++;
               e--;
           }
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends
// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template 

class Solution{
  public:
    // s : given string
    // return the expected answer
    int fun(string &s) {
        int m=1000000007;
        int a=0,b=0,c=0;
        for(auto x:s)
        {
            if(x=='a')
                a=(2*a%m+1)%m;
            if(x=='b')
                b=(2*b%m+a)%m;
            if(x=='c')
                c=(2*c%m+b)%m;
        }
        return c%m;
        //code here
    }
};

// { Driver Code Starts.
 
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.fun(s)<<endl;
    }
	return 0;
}  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    long long mi=a[0]>a[1] ? a[1] : a[0];
    long long ma=a[0]<a[1] ? a[1] : a[0];
    for(long long i=2;i<n;i++)
    {
        if(a[i]<mi)
        mi=a[i];
        if(a[i]>ma)
        ma=a[i];
    }
     return make_pair(mi,ma);
}
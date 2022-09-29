class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans(k);
        int n = arr.size();
        int l = 0, h = n-k;
        while(l<h)
        {
            int m = l+(h-l)/2;
            if((x-arr[m])> arr[m+k]-x)
            {
                l = m+1;
            }
            else
            {
                h = m;
            }
        }
        for(int i=0;i<k;i++)
        {
            ans[i]=arr[i+l];
        }
        return ans;
    }
};
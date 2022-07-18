class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l[n],r[n];
        l[0]=height[0];
        r[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            if(l[i-1]<height[i])
            {
                l[i]=height[i];
            }
            else
            l[i]=l[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            if(r[i+1]>height[i])
            {
                r[i]=r[i+1];
            }
            else
            r[i]=height[i];
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=(min(l[i],r[i])-height[i]);
        }
        return res;
        
    }
};
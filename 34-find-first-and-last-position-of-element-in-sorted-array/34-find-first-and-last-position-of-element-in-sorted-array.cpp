class Solution {
public:
    int firstOcc(vector<int> &nums, int x)
    {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(nums[m]<x)
                l=m+1;
            else if(nums[m]>x)
            h=m-1;
            else
            {
            if((m==0)||(nums[m-1]!=nums[m]))
            {
                return m;
            }
            else 
                h=m-1;
            }
        }
        return -1;
    }
    int lastOcc(vector<int> &nums,int x)
    {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h)
        {
        int m=l+(h-l)/2;
        if(nums[m]<x)
            l=m+1;
        else if(nums[m]>x)
            h=m-1;
        else
        {
            if((m==n-1)||(nums[m+1]!=nums[m]))
                return m;
            else
                l=m+1;
        }
    }
    return -1;
  }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        v.push_back(firstOcc(nums,target));
        v.push_back(lastOcc(nums,target));
        return v;
    }
};
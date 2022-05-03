class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v=nums;
        int a=0,b=0;
        sort(v.begin(),v.end());
        for(int i=0;i<nums.size();i++)
        {
            if(v[i]!=nums[i])
            {
                a=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(v[i]!=nums[i])
            {
                b=i;
                break;
            }
        }
        if(a==0 && b==0)
            return 0;
        return b-a+1;
    }
};
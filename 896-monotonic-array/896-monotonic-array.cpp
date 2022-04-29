class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int p=0,n=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                p++;
            }    
            else if(nums[i]>nums[i+1])
            {
                n++;
            }   
            else
            {
                p++;
                n++;
            }
        }
        if(p==nums.size()-1 || n==nums.size()-1)
            return true;
        else
            return false;
    }
};
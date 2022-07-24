class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int r=0,c=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[r])
                c++;
            else
                c--;
            if(c==0)
            {
                r=i;
                c=1;
            }    
        }
        return nums[r];
    }
};
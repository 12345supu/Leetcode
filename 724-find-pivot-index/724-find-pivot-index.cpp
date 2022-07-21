class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int f=0,e=0,s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }   
        for(int i=0;i<n;i++)
        {
            if(f==(s-f-nums[i]))
                return i;
            f+=nums[i];
        }
        return -1;
    }
};
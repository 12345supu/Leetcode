class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
                k++;
        }
        remove(nums.begin(),nums.end(),val);
        return (nums.size()-k);
    }
};
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans(2,0);
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                ans[0] = nums[i];
                break;
            }
        }
        int j = 1;
        for(int i = 0; i < n; i++)
        {
            if(ans[0] == j)
            {
                i++;
            }
            if(nums[i] != j)
            {   
                ans[1] = j;
                break;
            }
            j++;
        }
        if(ans[1]==0)
            ans[1] = n;
        return ans;
    }
};
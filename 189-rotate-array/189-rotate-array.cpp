class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if (n!=0) 
        {
            k=k%n;
            reverse(nums.begin(),nums.begin()+n-k);
            reverse(nums.begin()+nums.size()-k,nums.end());
            reverse(nums.begin(),nums.end());
        }
    }
};
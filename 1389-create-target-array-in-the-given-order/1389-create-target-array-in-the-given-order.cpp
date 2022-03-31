class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        int i=0;
        for(int x:nums)
        {
            target.insert(target.begin()+index[i++],x);
        }
        return target;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int h=numbers.size()-1,l=0;
        while(h>l)
        {
            int s=numbers[l]+numbers[h];
            if(s>target)
                h--;
            else if(s==target)
            {
                v.push_back(l+1);
                v.push_back(h+1);
                break;
            }
            else
                l++;
        }
        return v;
    }
};
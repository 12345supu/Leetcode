class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0,i,j,k;
        for(i=0;i<arr.size();i++)
        {
            for(j=i;j<arr.size();j+=2)
            {
                for(k=i;k<=j;k++)
                    sum+=arr[k];
            }
        }
        return sum;
    }
};
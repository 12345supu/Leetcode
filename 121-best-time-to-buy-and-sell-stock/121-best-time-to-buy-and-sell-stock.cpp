class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max=0,min=prices[0],r=0;
        for(int i=0;i<n;i++)
        {
            if(min>=prices[i])
            {
                min=prices[i];
            }
            r=prices[i]-min;
            if(max<r)
                max=r;
            
        }
        return max;
        
    }
};
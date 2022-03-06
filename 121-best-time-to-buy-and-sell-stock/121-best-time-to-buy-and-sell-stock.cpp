class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max=0,min=prices[0],tp=0,rp=0;
        for(int i=0;i<n;i++)
        {
            if(min>=prices[i])
            {
                min=prices[i];
            }
            tp=prices[i]-min;
            if(rp<tp)
                rp=tp;
            
        }
        return rp;
        
    }
};
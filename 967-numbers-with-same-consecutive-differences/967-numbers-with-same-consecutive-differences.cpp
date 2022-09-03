class Solution {
public:
    void dfs(int num, int n, int k, vector<int>& res)
    {
        if(n == 0){
            res.push_back(num);
            return;
        }
        int last_digit = num%10;
        if(last_digit >= k)
            dfs(num*10 + last_digit - k, n-1, k, res);
        if(k>0 && last_digit + k < 10)
            dfs(num*10 + last_digit + k, n-1, k, res);
            
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> res;
        if(n == 1) res.push_back(0);
        for(int i = 1; i < 10; i++)
        {
            dfs(i, n-1, k, res);
        }
        return res;
    }
};
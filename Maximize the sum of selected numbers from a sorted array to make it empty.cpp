//Given a array of N numbers, we need to maximize the sum of selected numbers. At each step, you need to select a number Ai, delete one occurrence of Ai-1 (if exists), and Ai each from the array. Repeat these steps until the array gets empty. The problem is to maximize the sum of the selected numbers.

//Note: Numbers need to be selected from maximum to minimum.

class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        int res = 0;
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++) 
            m[a[i]]++;
        for(int i = n-1; i>=0; i--)
        {
            if(m[a[i]] > 0)
            {
                res += a[i];
                m[a[i]]--;
                if(m.find(a[i] - 1) != m.end())
                    m[a[i] - 1]--;
            }
        }
        return res;
        // Complete the function
    }
};

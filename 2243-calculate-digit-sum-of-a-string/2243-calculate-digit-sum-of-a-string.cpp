class Solution {
public:
    
    string digitSum(string s, int k) {
        while(s.size()>k)
        {
            string t;
        for(int i=0;i<s.size();i++)
        {
            int sum=0;
            for(int j=i;j<i+k && j<s.size();j++)
            {
                sum+=(s[j]-'0');
            }
            i=i+k-1;
            t+=(to_string(sum));
        }
        s=t;
        }
        return s;
    }
};
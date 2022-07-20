class Solution {
public:
    int countAsterisks(string s) {
        int c=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='|')
            {
                c++;
            }
            if(c==2)
                c=0;
            if(c==0)
            {
                if(s[i]=='*')
                    ans++;
            }
        }
        return ans;
    }
};
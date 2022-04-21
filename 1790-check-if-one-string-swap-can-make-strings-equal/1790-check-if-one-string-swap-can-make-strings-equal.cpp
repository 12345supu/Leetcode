class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)
            return true;
        else
        {
            string a,b;
            int c=0;
            for(int i=0;i<s1.size() && i<s2.size();i++)
            {
                if(s1[i]!=s2[i])
                {
                    c++;
                    a += s1[i],b += s2[i];
                }
                if(c>2)
                    return false;
            }
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            if(a==b)
                return true;
                else
                    return false;
            // if(c==2)
            //     return true;
            // else
            //     return false;
        }
        
    }
};
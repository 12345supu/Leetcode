class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int m=word1.size(),n=word2.size();
        for(int i=0;i<m && i<n;i++)
        {
            s+=word1[i];
            s+=word2[i];
        }
        if(word1.size()>word2.size())
        {
            for(int i=n;i<m;i++)
                s+=word1[i];
        }
        else
            for(int i=m;i<n;i++)
                s+=word2[i];
        return s;
    }
};
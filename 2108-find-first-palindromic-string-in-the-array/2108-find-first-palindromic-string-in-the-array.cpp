class Solution {
public:
    int ispal(string s)
    {
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]!=s[s.size()-1-i])
                return 0;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(ispal(words[i])==1)
                return words[i];
        }
        return "";
    }
};
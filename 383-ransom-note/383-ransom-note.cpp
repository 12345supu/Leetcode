class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[256]={0};
        for(char i: magazine)
        {
            count[i]++;
        }
        for(char i: ransomNote)
        {
            count[i]--;
        }
        for(int i=0;i<256;i++)
        {
            if(count[i]<0)
                return false;
        }
        return true;
    }
};
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int f=1;
            string r=words[i];
            for(int j=0;j<r.size();j++)
            {
                if(allowed.find(r[j])<0 || allowed.find(r[j])>allowed.size())
                    f=0;
            }
            if(f==1)
                c++;
        }
        return c;
    }
};
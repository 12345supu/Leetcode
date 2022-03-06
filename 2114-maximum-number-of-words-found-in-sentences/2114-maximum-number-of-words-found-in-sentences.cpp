class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0,n;
        for(int i=0;i<sentences.size();i++)
        {
            n=1;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                    n++;
            }
            if(max<n)
                max=n;
        }
        
        return max;
    }
};
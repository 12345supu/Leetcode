class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int j=0;j<image.size();j++)
        {
            reverse(image[j].begin(),image[j].end());
            for(int i=0;i<image[0].size();i++)
            {
            if(image[j][i]==0)
                image[j][i]=1;
            else
                image[j][i]=0;
            }
        }
        return image;
    }
};
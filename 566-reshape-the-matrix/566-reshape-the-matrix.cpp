class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if((mat.size()*mat[0].size()) != r*c)
            return mat;
        vector<int> v;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                v.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> res(r,vector<int> (c,0));
        int k=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                res[i][j]=v[k++];
            }
        }
        return res;
    }
};
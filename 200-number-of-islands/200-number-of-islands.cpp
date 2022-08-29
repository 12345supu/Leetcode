class Solution {
public:
    void make0(int i,int j,vector<vector<char>>& grid)
    {
        int m = grid.size(), n = grid[0].size();
        if (i<0 || i==m || j<0 || j==n || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        make0(i,j-1,grid);
        make0(i-1,j,grid);
        make0(i+1,j,grid);
        make0(i,j+1,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int island=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {   
                    island++;
                    make0(i,j,grid);
                }
            }
        }
        return island;
    }
};
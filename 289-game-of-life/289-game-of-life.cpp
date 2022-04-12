class Solution {
public:
    int fun(vector<vector<int>>& curr, int i, int j, int m, int n) {
	int c = 0;
	if(i>0) {
		if(curr[i-1][j] == 1) c++;
	}
	if(i<m-1) {
		if(curr[i+1][j] == 1) c++;
	}
	if(j>0) {
		if(curr[i][j-1] == 1) c++;
	}
	if(j<n-1) {
		if(curr[i][j+1] == 1) c++;
	}

	if(i>0 && j>0) {
		if(curr[i-1][j-1] == 1) c++;
	}
	if(i>0 && j<n-1) {
		if(curr[i-1][j+1] == 1) c++;
	}
	if(i<m-1 && j>0) {
		if(curr[i+1][j-1] == 1) c++;
	}
	if(i<m-1 && j<n-1) {
		if(curr[i+1][j+1] == 1) c++;
	}
	return c;
}
void gameOfLife(vector<vector<int>>& board) {
	vector<vector<int>> curr = board;
	int m = board.size();
	int n = board[0].size();
	for(int i = 0; i<m; i++) {
		for(int j = 0; j<n; j++) {
			int sum = fun(curr, i, j, m, n);
				if(sum == 3) {
					board[i][j] = 1;
				}
			
				if(sum < 2 || sum > 3) {
					board[i][j] = 0;
				}
			
		}
	}
}
};
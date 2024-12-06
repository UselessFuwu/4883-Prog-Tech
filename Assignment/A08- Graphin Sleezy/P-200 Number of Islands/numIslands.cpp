class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()){
            return 0;
        }

        int rows = grid.size();
        int cols = grid[0].size();
        int islandCount = 0;

        for(int i = 0; i < rows; ++i){
            for (int j = 0; j < cols; ++j){
                if(grid[i][j] == '1'){
                    islandCount++;

                    dfs(grid, i, j);
                }
            }
        }
        return islandCount;
    }
};

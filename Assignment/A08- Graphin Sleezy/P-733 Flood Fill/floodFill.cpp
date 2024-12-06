class Solution {
public:
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int regColor = image[sr][sc];

        if (regColor == color)
            return image;

        dfs(image, sr, sc, regColor, color);
        return image;
    }
};

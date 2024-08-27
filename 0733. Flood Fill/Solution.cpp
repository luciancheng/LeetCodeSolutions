class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        dfs(image, sr, sc, color, image[sr][sc]);
        return image;
    }

    void dfs(vector<vector<int>>& image, int i, int j, int color, int startColor) {
        if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size()) return;
        if (image[i][j] != startColor) return;

        image[i][j] = color;

        dfs(image, i + 1, j, color, startColor);
        dfs(image, i - 1, j, color, startColor);
        dfs(image, i, j + 1, color, startColor);
        dfs(image, i, j - 1, color, startColor);
    }
};

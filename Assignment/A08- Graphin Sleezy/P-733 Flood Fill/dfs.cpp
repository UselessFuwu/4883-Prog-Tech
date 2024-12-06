void dfs(vector<vector<int>>& image, int sr, int sc, int color,
             int newColor) {
        // stack to iterate dfs interatively
        stack<pair<int, int>> stc;
        stc.push({sr, sc});

        while (!stc.empty()) {
            // get current pixel from stack
            pair<int, int> current = stc.top();
            stc.pop();

            int currentSr = current.first;  // row index
            int currentSc = current.second; // col index

            image[currentSr][currentSc] = newColor;

            // push adjacent pixels to the stack
            if (currentSr + 1 < image.size() && image[currentSr + 1][currentSc] == color)
                stc.push(pair<int, int>(currentSr + 1, currentSc)); // down
            if (currentSr - 1 >= 0 && image[currentSr - 1][currentSc] == color)
                stc.push(pair<int, int>(currentSr - 1, currentSc)); // up
            if (currentSc + 1 < image[0].size() && image[currentSr][currentSc + 1] == color)
                stc.push(pair<int, int>(currentSr, currentSc + 1)); // right
            if (currentSc - 1 >= 0 && image[currentSr][currentSc - 1] == color)
                stc.push(pair<int, int>(currentSr, currentSc - 1)); // left
        }
    }

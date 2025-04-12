class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;

        if (mat.empty()) return ans;

        int top = 0, bottom = mat.size() - 1;
        int left = 0, right = mat[0].size() - 1;

        while (top <= bottom && left <= right) {

            // Traverse from left to right (Top row)
            for (int i = left; i <= right; i++)
                ans.push_back(mat[top][i]);
            top++;

            // Traverse from top to bottom (Right column)
            for (int i = top; i <= bottom; i++)
                ans.push_back(mat[i][right]);
            right--;

            // Traverse from right to left (Bottom row)
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    ans.push_back(mat[bottom][i]);
                bottom--;
            }

            // Traverse from bottom to top (Left column)
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(mat[i][left]);
                left++;
            }
        }

        return ans;
    }
};

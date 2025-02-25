class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        vector<int>temp;

        int r = matrix.size();
        int c = matrix[0].size();

        for(int i = 0;i<r;i++)
        {
            for(int j = 0;j<c;j++)
            {
                temp.push_back(matrix[i][j]);
            }
        }

        sort(temp.begin(),temp.end());

        return temp[k-1];
        
    }
};
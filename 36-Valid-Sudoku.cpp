class Solution {
public:

    bool traversal(vector<vector<char>>& nums, int sr, int er, int sc, int ec) 
    {
        unordered_set<char> st;

        for (int i = sr; i <= er; i++) 
        {
            for (int j = sc; j <= ec; j++) 
            {
                if (nums[i][j] == '.') continue;
                if (st.find(nums[i][j]) != st.end()) return false;
                st.insert(nums[i][j]);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& nums) 
    {
        
        // Validate Rows
        for (int i = 0; i < 9; i++) 
        {
            set<char> temp;  
            for (int j = 0; j < 9; j++) 
            {
                char temp_no = nums[i][j];  
                if (temp_no == '.') continue;
                if (temp.find(temp_no) != temp.end()) return false;
                temp.insert(temp_no);
            }
        }

        // Validate Columns
        for (int i = 0; i < 9; i++) 
        {
            set<char> temp;  
            for (int j = 0; j < 9; j++) 
            {
                char temp_no = nums[j][i]; 
                if (temp_no == '.') continue;
                if (temp.find(temp_no) != temp.end()) return false;
                temp.insert(temp_no);
            }
        }

        // Validate Boxes
        for (int sr = 0; sr < 9; sr += 3) 
        {  
            for (int sc = 0; sc < 9; sc += 3)
            {  
                if (!traversal(nums, sr, sr + 2, sc, sc + 2)) return false;
            }
        }

        return true;
    }
};

class Solution {
public:

    void solve(vector<int> nums, int index, vector<vector<int>> &ans){
        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return ;
        }

        for(int j = index; j < nums.size(); j++){
            swap(nums[index] , nums[j]);            //swap the index by all the i.e. abc acb
            solve(nums, index + 1, ans);            //recursive call for all swapped nums value
            swap(nums[index] , nums[j]);            //backtrack the nums to its initial state \abc\ 
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums , index , ans);

        return ans;
    }
};
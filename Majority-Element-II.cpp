class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
       unordered_map<int,int>seen;

        vector<int> ans;

        int n = nums.size()/3;

        for(auto num : nums)
        {
            seen[num]++;

        }

        for(auto& [key,value]: seen)
        {
            if(value > n)
            {
                ans.push_back(key);
            }
            
        }

        return ans;
    }
};
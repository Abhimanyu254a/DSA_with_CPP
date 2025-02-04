class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i = 0;i<nums.size();i++)
        {
            if( i>0 &&nums[i] == nums[i-1]) continue;
            for(int j = i+1;j<nums.size();j++)
            {
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                int k = j+1;
                int l = nums.size()-1;

                while(k<l)
                {
                    long long temp_sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                    if(temp_sum == target)
                    {
                        vector<int>temp_arr ={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp_arr);
                        k++;l--;
                        
                        while(k < l && k > j+1 && nums[k] == nums[k-1]) k++;
                        while(k<l && nums[l] == nums[l+1]) l--;
                    }

                    else if(target > temp_sum) k++;
                    else l--;
                }
            }
        }

        return ans;
    }
};// time complexity is O(n^3) and space complexity is O(1)
class Solution {
public:
    bool search(vector<int>& nums, int target) {

        if(nums.size() == 1 && nums[0] == target)
        return true;




        int s = 0;
        int e = nums.size()-1;

        int mid = 0;

        while(s<=e)
        {
            mid = s+(e-s)/2;

            if(nums[mid] == target)
            return true;

            if(nums[mid] == nums[s] && nums[e] == nums[mid])
            {
                s++;
                e--;
            }
            else if (nums[s] <= nums[mid]) {
                if (nums[s] <= target && target < nums[mid])  
                    e = mid - 1;
                else
                    s = mid + 1;
            }
            
            else {
                if (nums[mid] < target && target <= nums[e])
                    s = mid + 1;
                else
                    e = mid - 1;
            }

            
        }
        return false;
        
    }
};
/*
*    Time Complexity will be :- O(log n)
*    Space Complexity will be :- O(1)
*/
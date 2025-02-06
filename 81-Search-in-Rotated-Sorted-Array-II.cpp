class Solution {
public:
    bool search(vector<int>& nums, int target) {

        if(nums.size() == 1 && nums[0] == target)
        return true;


        sort(nums.begin(),nums.end());

        int s = 0;
        int e = nums.size()-1;

        int mid = 0;

        while(s<=e)
        {
            mid = s+(e-s)/2;

            if(nums[mid] == target)
            return true;

            if(nums[mid] > target)
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }

            
        }
        return false;
        
    }
};
/*
*    Time Complexity will be :- O(n log n)
*    Space Complexity will be :- O(1)
*/
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0)
        return {-1,-1};

        int f = -1;
        int l = -1;


        int s = 0;
        int e = nums.size()-1;
        int mid = 0;

        while(s<=e)
        {
            mid = s+(e-s)/2;

            if(nums[mid] == target)
            {
                f = mid;
                e = mid-1;

            }
            else if(nums[mid]>target) e = mid-1;
            else s = mid+1;
        }
        s = 0;
        e = nums.size()-1;

        while(s<=e)
        {
            mid = s+(e-s)/2;
            if(nums[mid] == target)
            {
                l = mid;
                s = mid+1;
            }
            else if(nums[mid] > target) e = mid-1;
            else s = mid+1;
        }

        return {f,l};






    }
};// time complexity is O(log n) and space complexity is O(1)
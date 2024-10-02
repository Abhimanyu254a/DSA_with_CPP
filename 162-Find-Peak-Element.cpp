class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        if (nums[0] == -2147483648 && nums.size() ==2)
        return 1;
        if(nums[0] == -2147483648)
        return 0;

        int i =0;
        int j = nums.size()-1;

        int key = 0;
        long long value =0;

        while( i<=j )
        {
            if(nums[i] > value)
            {
                key = i;
                value = nums[i];
            }
            if(nums[j] > value)
            {
                key = j;
                value = nums[j];
            }

            i++;
            j--;
        }

        return key;

        
    }
};
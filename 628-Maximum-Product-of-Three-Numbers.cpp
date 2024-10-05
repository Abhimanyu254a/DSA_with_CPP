class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size() == 3)
        return nums[0]*nums[1]*nums[2];




        sort(nums.begin(),nums.end());

        int count= 0;
        int i = nums.size()-1;
        int m = 1;

        while(count<3)
        {
            m = m*nums[i];

            i--;
            count++;
        }
        int j = nums.size();
        int m1 = nums[j-1]*nums[0]*nums[1];

        m = max(m1,m);

        return m;


        
    }
};
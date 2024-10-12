class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;// creating a vector

        int sum = 0;// creating a sum variable

        for (int i = 0;i<nums.size();i++)//iterating over the vector and suming each element
        {
            sum =sum+nums[i];
            ans.push_back(sum);//pushing the element into the vectro
        }
        return ans;
    }//complexity of the code is :- time O(n) space O(1)
};
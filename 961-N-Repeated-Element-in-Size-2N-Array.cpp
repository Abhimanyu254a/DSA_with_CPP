class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        set <int>ans;// creating a set
        int i =0;
        while(i<nums.size())// iterating over the vector
        {
            int temp = nums[i];
            if(ans.contains(temp) == true)
            return temp;
            else
            ans.insert(nums[i]);

            i++;
        }
        return i;        
    }//complexity is time - O(n) and space O(n)
};
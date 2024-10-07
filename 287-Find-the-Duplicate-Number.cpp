class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> temp; // making a set 
        int i = 0;

        while(i<nums.size())
        {
            
            if(temp.contains(nums[i])) return nums[i]; // seeing if the given number in vector is present in the set or not
            
            temp.insert(nums[i]); // if the number is not there then insert to the set
            i++; // increment i++
        }

        return nums[0];
        
    }
};
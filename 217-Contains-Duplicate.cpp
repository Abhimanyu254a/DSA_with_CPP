class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int,int>nmap;

        

        for(int i = 0;i<nums.size();i++)
        {
            if(nmap.find(nums[i]) != nmap.end())
            return true;
            else
            nmap[nums[i]] =1;
        }
        return false;

    }
};
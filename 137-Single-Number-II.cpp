class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>ans;
       for(int element:nums)ans[element]++;



       for(auto element:ans)
       
       
       {
        if(element.second==1)return element.first;
       } 
       return 0;
    }
};
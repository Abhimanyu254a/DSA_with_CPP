class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size() <3)//if the size of the array is less than 3 then return false
        return false;

        for(int i = 0;i<=arr.size()-3;i++)//iterating through the array
        {
            if(arr[i]%2 != 0 && arr[i+1]%2 != 0 && arr[i+2]%2 != 0)//checking the condition true or not 
            return true;
        }
        return false;
        
    }//Complexity :- Time O(n) Space O(1)
};
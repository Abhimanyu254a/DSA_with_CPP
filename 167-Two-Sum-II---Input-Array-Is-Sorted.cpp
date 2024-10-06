class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int s = numbers.size();
        vector<int> ans;

        int i = 0;
        int j = s-1;

        while(i<j) // Looping the both i and j
        {
            if(numbers[i]+numbers[j] == target) // if the both number's sum is equal to target then push it
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            
            else if (numbers[i]+numbers[j] > target) j--; // if the sum is greater than the target then move the pointer j closer to i
            
            else i++; // if the sum is smaller than increament the i

        }
        return ans; // push the answer

        
        
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        int i = 0;
        int j = arr.size()-1;

        while(i<j)
        {
            int temp = arr[i] + arr[j];

            if(temp == target)
            return {i+1,j+1};

            else if(temp < target)
            i++;
            else j--;
        }
        return {};
        
    }
};
//complexity is O(n)
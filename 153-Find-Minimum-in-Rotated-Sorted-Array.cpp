class Solution {
public:
    int findMin(vector<int>& arr) {
        int r = arr.size()-1;
        int l = 0;

        while(l<r)
        {
            int mid = l+(r-l)/2;
            if(arr[mid] > arr[r])
            {
                l = mid+1;
            }
            else
            {
                r = mid;
            }
        }
        return arr[r];
    }
};
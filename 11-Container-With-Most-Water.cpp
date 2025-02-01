class Solution {
public:
    int maxArea(vector<int>& arr) {
        int  i = 0, j = arr.size()-1;
        int max0 = 0;
        int mi = 0,ma = 0;

        while(i<j)
        {
            int h =min(arr[i],arr[j]);
            max0 = max(max0,((j-i)*h));


            if(arr[i] > arr[j])
            {

                j--;

            }
            else 
            {

                i++;
            }



        }
        return max0;
    }
};
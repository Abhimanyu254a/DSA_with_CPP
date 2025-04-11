class Solution {
public:

    int binary(int n)
    {
        
        int temp = n;
        int sum = 0;

        while(temp != 0)
        {
            
            sum = sum + (temp)%2;
            temp/=2;
        }


        return sum;
    }
    vector<int> countBits(int n) {

        vector<int>ans;
        
        for(int i = 0;i<=n;i++)
        {


            int temp = binary(i);

            ans.push_back(temp);
        }


        return ans;

        
        
    }
};
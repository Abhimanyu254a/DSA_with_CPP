class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int>ans;
        for(int i = left ; i<= right ; i++)
        {
            int x = i;
            bool flag = true;
            while(x)
            {
                int digit = x%10;
                if(digit == 0 || i%digit != 0 ) flag = false;
                x/=10;
            }
            if(flag == true) ans.push_back(i);
        }

        return ans;
        
    }
};
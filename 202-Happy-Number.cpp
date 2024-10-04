#include<bits/stdc++.h>
class Solution {
public:
    bool isHappy(int n) {


        unordered_set<int>ans;
        
        while(n>4)
        {
            int sum = 0;
            int num = n;

            while(num != 0)
            {
                sum = sum+ ((num%10)*(num%10));

                num/=10;
            }

            n = sum;
        }

        return n==1;

        
    }
};
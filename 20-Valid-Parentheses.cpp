class Solution {
public:
    bool isValid(string s) {

        stack<char>ans;
        unordered_map<char,char>temp ={
            {'[',']'},
            {'{','}'},
            {'(',')'}
        };

        
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '{'|| s[i] == '(' || s[i] == '[')
            {
            ans.push(s[i]);

            }
            else
            {
                
                if(ans.empty() || temp[ans.top()] != s[i])
                return false;

                ans.pop();
            }

        }

        if(ans.empty()) return true;
        else return false;
        
    }
};//time complexity is O(n) and the space is O(n)
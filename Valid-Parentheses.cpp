class Solution {
public:
    bool isValid(string s) {

        unordered_map<char,char>seen = {
            {'[',']'},
            {'{','}'},
            {'(',')'}        
            };

        stack<char>t;

        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '[' || s[i] == '{' || s[i] == '(') t.push(s[i]);
            else if(!t.empty() && seen[t.top()] == s[i]) t.pop();
            else return false;
        }


        return t.empty();



        
    }
};
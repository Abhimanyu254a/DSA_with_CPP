class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char ,int>seen;

        for(int i = 0;i<s.size();i++)
        {
            seen[s[i]]++;
        }
        for(int i = 0;i<t.size();i++)
        {
            seen[t[i]]--;
        }

        for(auto x : seen)
        {
            if(x.second != 0)
            return false;
        }
        return true;

        
    }
};
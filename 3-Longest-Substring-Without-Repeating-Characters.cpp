class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int l = 0;
        int r = 0;
        unordered_set<char>sett;
        int longest= 0;

        for (r = 0;r<s.size();r++)
        {
            while(sett.find(s[r]) != sett.end())
            {
                sett.erase(s[l]);
                l+=1;
            }

            sett.insert(s[r]);

            int diff = (r-l)+1;

            longest = max(longest,diff);
        }
        
        return longest;
        
    }
};
// time Complexity is O(n)
//space complexity is O(n) or O(1) 
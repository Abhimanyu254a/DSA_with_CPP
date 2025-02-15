class Solution {
public:
    string removeDuplicateLetters(string s) {

    int n = s.size();
    vector<int> last(26, -1);
    vector<bool> taken(26, false);
    string result;

    // Store the last occurrence index of each character
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        last[ch - 'a'] = i;
    }

    for (int i = 0; i < n; i++) {
        char ch = s[i];
        int idx = ch - 'a';

        // If character is already in result, skip it
        if (taken[idx]) continue;

        // Remove characters from the result if they are lexicographically greater
        // and appear later in the string
        while (!result.empty() && result.back() > ch && last[result.back() - 'a'] > i) {
            taken[result.back() - 'a'] = false;  // Mark it as not taken
            result.pop_back();
        }

        result.push_back(ch);
        taken[idx] = true;
    }
    return result;
}

    
};
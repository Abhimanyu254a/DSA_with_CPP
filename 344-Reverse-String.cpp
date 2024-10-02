class Solution {
public:
    void reverseString(vector<char>& s) {

        int i = 0;

        
        int size = s.size();
        
        if(size == 1) return;
        int j = size-1;

        while(i <= j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};
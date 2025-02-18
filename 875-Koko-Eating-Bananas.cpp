class Solution {
public:
    bool see(vector<int>& piles, int h, int mid)
    {
        int hour = 0;

        for(int &x : piles)
        {
            hour += x/mid;

            if(x%mid != 0) hour++;
        }
        return hour <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max_el = *max_element(piles.begin(),piles.end());

        int l = 1;
        int r = max_el;

        int mid = 0;

        while(l<r)
        {
            mid = l+(r-l)/2;

            if(see(piles,h,mid))
            r=mid;
            else l = mid+1;
            
        }
        return l;
    }
};
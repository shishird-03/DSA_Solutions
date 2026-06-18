class Solution {
public:
    int maximum(vector<int>& piles){
        int maxi = INT_MIN;
        for(int x : piles){
            maxi = max(maxi, x);
        }
        return maxi;
    }

    long long minimumhours(vector<int>& piles, int h){
        long long hours = 0;
        for(int x : piles){
            hours += (1LL * x + h - 1) / h;
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maximum(piles);

        while(low <= high){
            int mid = low + (high - low) / 2;

            long long hours = minimumhours(piles, mid);

            if(hours <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};
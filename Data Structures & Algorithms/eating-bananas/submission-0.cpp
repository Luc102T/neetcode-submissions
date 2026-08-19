class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *std::max_element(piles.begin(), piles.end());
        int ans = high;

        auto canFinish = [&](int k) -> bool {
            long long total_hours = 0;
            for (int p : piles) {
                total_hours += (p + k - 1LL) / k;
            }
            return total_hours <= h;
        };

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canFinish(mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

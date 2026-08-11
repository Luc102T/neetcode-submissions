class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int result = 0;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (prices[i] - prices[j] < result) {
                    result = prices[i] - prices[j];
                }
            }
        }

        result = abs(result);
        
        return result;
    }
};

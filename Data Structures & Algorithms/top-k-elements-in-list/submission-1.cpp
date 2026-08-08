class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        vector<vector<int>> buckets(n + 1);
        for (const auto& [num, freq] : count) {
            buckets[freq].push_back(num);
        }

        vector<int> result;
        for (int i = n; i >= 1 && result.size() < k; --i) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }

        return result; 
    }
};

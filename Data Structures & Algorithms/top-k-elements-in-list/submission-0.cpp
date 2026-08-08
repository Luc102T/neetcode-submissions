class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        // 1. Đếm tần suất xuất hiện của từng phần tử
        std::unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        // 2. Xếp phần tử vào bucket dựa theo tần suất (buckets[i] chứa các số xuất hiện i lần)
        std::vector<std::vector<int>> buckets(n + 1);
        for (const auto& [num, freq] : count) {
            buckets[freq].push_back(num);
        }

        // 3. Duyệt ngược từ tần suất cao nhất (n) về 1 để lấy k phần tử
        std::vector<int> result;
        for (int i = n; i >= 1 && result.size() < k; --i) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }

        return result; 
    }
};

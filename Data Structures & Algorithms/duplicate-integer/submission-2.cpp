class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int x : nums) {
            int tmp = x;
            int count = 0;
            for (int x : nums) {
                if (tmp == x) {
                    count++;
                }
            }
            if (count >= 2) {
                return true;
            }
        }
        return false;
    }
};
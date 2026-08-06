class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ans1 = 0, ans2 = 0;
        vector<int> ans;
        for (int i = 0; i < (int)nums.size() - 1; i++) {
            for (int j = i + 1; j < (int)nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    ans1 = i;
                    ans2 = j;
                }
            }
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};

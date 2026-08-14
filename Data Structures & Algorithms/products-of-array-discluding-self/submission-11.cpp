class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int count = 0;
        int index;
        int n = nums.size();
        int p = 1;

        for (int i = 0; i < n ; i++) {
            if (nums[i] == 0) {
                count ++;
                index = i;
            }
        }
        
        if (count > 1) {
            ans.assign(n, 0);
        }

        else if (count == 1) {
            for (int i = 0; i < n; i++) {
                if (i != index) {
                    ans.push_back(0);
                    p *= nums[i];
                }
            }

            ans.insert(ans.begin() + index, p);
        }

        else {
            for (int i = 0; i < n; i++) {
                    p *= nums[i];
            }

            for (int i = 0; i < n; i++) {
                ans.push_back(p / nums[i]);
            }
        }

        return ans;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastPos(256, -1);
        int ans = 0;
        int l = 0;

        for (int r = 0; r < s.size(); r++) {
            if (lastPos[s[r]] >= l) {
                l = lastPos[s[r]] + 1;
            }

            lastPos[s[r]] = r;
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        for (char c : s) {
            if (isalnum(c)) {
                ans += tolower(c);
            }
        }
        int r = (int)ans.size() - 1, l = 0;

        while(l < r) {
            if (ans[l] != ans[r]) {
                return false;
            }
            
            l++;
            r--;
        }

        return true;
    }
};

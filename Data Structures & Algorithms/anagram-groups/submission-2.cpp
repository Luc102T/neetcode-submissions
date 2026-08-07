class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        
        unordered_map<string, vector<string>> mp;
        for (const string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            mp[key].push_back(str);
        }

        for (auto& pair : mp) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};

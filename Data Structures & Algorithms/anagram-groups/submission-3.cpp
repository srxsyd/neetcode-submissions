class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> newMap;
        for (string s : strs) {
            int arr[26] = {};
            for (char c : s) {
                arr[c-97]++;
            }
            string key;
            for (int x : arr) {
                key += "#" + to_string(x);
            }
            newMap[key].push_back(s);
        }
        vector<vector<string>> res;
        for (auto &a : newMap) {
            res.push_back(a.second);
        }

        return res;
    }
};

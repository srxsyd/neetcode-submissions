class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        priority_queue<pair<int, int>> pq;

        for (auto &a : freq) {
            pq.push({a.second, a.first});
        }

        vector<int> res;

        for (int i = 0; i < k; i++) {
            pair<int, int> top = pq.top();
            res.push_back(top.second);
            pq.pop();
        }

        return res;
    }
};

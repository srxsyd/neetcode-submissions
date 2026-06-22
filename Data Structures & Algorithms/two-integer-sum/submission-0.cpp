class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> someMap;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (someMap.find(complement) != someMap.end() && someMap[complement] != i) {
                return {someMap[complement], i};
            }
            someMap[nums[i]] = i;
        }

        return {};
    }
};

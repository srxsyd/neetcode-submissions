class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> someSet;

        for (int i = 0; i < nums.size(); i++) {
            someSet.insert(nums[i]);
        }

        //find if it has a predecessor OR if it has a successor
        int maxLen = 0;

        for (const auto& elem : someSet) {
            if (!someSet.contains(elem - 1)) {
                int count = 1;
                int val = 1;
                while (someSet.contains(elem + val)) {
                    count++;
                    val++;
                }
                if (count > maxLen) {
                    maxLen = count;
                }
            }
        }

        return maxLen;
    }
};

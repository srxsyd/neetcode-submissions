class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());

        int pre = 1;
        for (int i = 0; i < nums.size(); i++) {
            prefix[i] = pre;
            pre *= nums[i];
        }
        int suf = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            suffix[i] = suf;
            suf *= nums[i];
        }

        vector<int> res(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            res[i] = prefix[i] * suffix[i];
        }

        return res;
    }
};

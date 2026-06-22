class Solution {
    public boolean hasDuplicate(int[] nums) {
        boolean result = false;
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            if (set.contains(nums[i])) {
                result = true;
                break;
            }
            else {
                set.add(nums[i]);
            }
        }
        return result;
    }
}

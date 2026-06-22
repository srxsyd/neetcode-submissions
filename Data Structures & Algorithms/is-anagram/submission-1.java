class Solution {
    public boolean isAnagram(String s, String t) {
        String[] ar = s.split("");
        String[] ar2 = t.split("");
        Arrays.sort(ar);
        Arrays.sort(ar2);
        //System.out.println(Arrays.toString(ar));
        //System.out.println(Arrays.toString(ar2));
        if (s.length() != t.length()) {
            return false;
        }
        boolean result = true;
        for (int i = 0; i < s.length(); i++) {
            if (ar[i].equals(ar2[i]) == false) {
                result = false;
                break;
            }
        }
        return result;
    }
}

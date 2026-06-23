class Solution {
public:
    bool isPalindrome(string s) {
        string newStr;

        for (char c : s) {
            if (isalnum(c)) {
                newStr += tolower(c);
            }
        }

        //cout << newStr << endl;

        int startInd = 0;
        int endInd = newStr.length() - 1;

        while (startInd < endInd) {
            if (newStr[startInd] != newStr[endInd]) {
                return false;
            }
            startInd++;
            endInd--;
        }
        return true;
    }
};

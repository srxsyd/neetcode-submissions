class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> freqs;
        unordered_map<char, int> freqt;

        for (char st : s) {
            if (freqs.find(st) != freqs.end()) {
                int currs = freqs[st];
                freqs[st] = currs + 1;
            } else {
                freqs[st] = 1;
            }
        }

        for (auto i : freqs) {
            cout << i.first << " " << i.second << endl;
        }

        for (char ts : t) {
            if (freqt.find(ts) != freqt.end()) {
                int currs = freqt[ts];
                freqt[ts] = currs + 1;
            } else {
                freqt[ts] = 1;
            }
        }

        for (auto i : freqt) {
            cout << i.first << " " << i.second << endl;
        }

        for (auto i : freqs) {
            if (freqt.find(i.first) == freqt.end() || freqt[i.first] != i.second) {
                return false;
            }
        }

        return true;
    }
};

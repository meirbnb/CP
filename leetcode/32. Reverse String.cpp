class Solution {
public:
    void reverseString(vector<char>& s, int l = 0) {
        if (l == s.size() / 2)
            return;
        swap(s[l++], s[s.size() - l]);
        reverseString(s, l);
    }
};

// https://leetcode.com/problems/reverse-string/
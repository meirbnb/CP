class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int>m;
        for (char c : s)
            ++m[c];
        for (char c : t)
            --m[c];
        for (auto u : m)
            if (u.second)
                return false;
        return true;
    }
};

// https://leetcode.com/problems/valid-anagram/
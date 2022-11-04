class Solution {
public:
    bool isPalindrome(string v) {
        int n = v.length();
        string s = "", rs = "";
        for (int i=0; i<n; i++){
            if (isalpha(v[i]) || isdigit(v[i]))
                s  += tolower(v[i]);
            if (isalpha(v[n-i-1]) || isdigit(v[n-i-1]))
                rs += tolower(v[n-i-1]);
        }
        return s == rs;
    }
};

// https://leetcode.com/problems/valid-palindrome/
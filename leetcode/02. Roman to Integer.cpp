class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        map<char, int>m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int prev = 0;
        for (int i=0; i<s.length(); i++){
            int cur  = m[s[i]];
            int prev = m[s[i+1]];
            if (cur < prev)
                ans -= cur;
            else
                ans += cur;
        }
        return ans;
    }
};

// https://leetcode.com/problems/roman-to-integer/

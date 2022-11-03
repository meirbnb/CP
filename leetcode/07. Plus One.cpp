class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = 1;
        for (int i=digits.size()-1; i>=0; i--)
            if (digits[i] + c > 9)
                digits[i] = 0;
            else
                digits[i] += c, c = 0;
        if (c)
            digits.insert(digits.begin(), c);
        return digits;
    }
};

// https://leetcode.com/problems/plus-one/
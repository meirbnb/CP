class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int one = 1;
        for (int i=digits.size()-1; i>=0; i--)
            if (digits[i] + one > 9)
                digits[i] = 0;
            else
                digits[i] += one, one = 0;
        if (one)
            digits.insert(digits.begin(), one);
        return digits;
    }
};

// https://leetcode.com/problems/plus-one/

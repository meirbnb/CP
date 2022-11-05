class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0, k = columnTitle.length();
        for (int i=0; i<k; i++)
            ans += (columnTitle[i] - 'A' + 1) * pow(26, k - i - 1);
        return ans;
    }
};

// https://leetcode.com/problems/excel-sheet-column-number/
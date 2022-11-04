class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int su = 0;
        for (int i=1; i<=n; i++)
            su = su + i - nums[i - 1];
        return su;
    }
};

// https://leetcode.com/problems/missing-number/
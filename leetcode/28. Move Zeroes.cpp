class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int p = 0, i=0; i<nums.size(); i++)
            if (nums[i])
                swap(nums[p++], nums[i]);
    }
};

// https://leetcode.com/problems/move-zeroes/
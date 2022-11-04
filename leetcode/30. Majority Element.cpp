class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        return nums[nums.size() / 2];
    }
};

// https://leetcode.com/problems/majority-element/
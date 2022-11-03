class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        int k = 1;
        for (int i=1; i<s; i++)
            if (nums[i] != nums[i - 1])
                nums[k++] = nums[i];
        return k;
    }
};

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
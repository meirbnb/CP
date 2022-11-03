class Solution {
public:
    TreeNode* helper(vector<int>a, int l, int r){
        if (l > r)
            return nullptr;
        int m = l + (r - l) / 2;
        return new TreeNode(a[m], helper(a, l, m - 1), helper(a, m + 1, r));
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }
};

// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
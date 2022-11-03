class Solution {
public:
    vector<int>ans;

    vector<int> inorderTraversal(TreeNode* root) {
        if (!root)
            return ans;

        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);
        
        return ans;
    }
};

// https://leetcode.com/problems/binary-tree-inorder-traversal/
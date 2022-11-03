class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return dfs(root->left, root->right);
    }
    bool dfs(TreeNode* p, TreeNode* q){
        if (!p && !q)
            return true;
        if (!p || !q)
            return false;
        if (p->val == q->val)
            return dfs(p->left, q->right) && dfs(p->right, q->left);
        else
            return false;
    }
};

// https://leetcode.com/problems/symmetric-tree/
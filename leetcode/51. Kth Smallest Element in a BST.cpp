class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>s;
        auto cur = root;
        while(cur || s.size()){
            if (cur){
                s.push(cur);
                cur = cur->left;
            } else {
                cur = s.top();
                s.pop();
                if (--k == 0)
                    return cur->val;
                cur = cur->right;
            }
        }
        return 0;
    }
};

// https://leetcode.com/problems/kth-smallest-element-in-a-bst/
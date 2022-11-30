class Solution {
public:
    void helper(vector<int>v, int l, int r, vector<vector<int>>&ans){
        if (l == r){
            ans.push_back(v);
            return;
        }
        for (int i=l; i<=r; i++){
            swap(v[i], v[l]);
            helper(v, l + 1, r, ans);
            swap(v[i], v[l]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        //sort(nums.begin(), nums.end());
        helper(nums, 0, nums.size()-1, ans);
        return ans;
    }
};

// https://leetcode.com/problems/permutations/
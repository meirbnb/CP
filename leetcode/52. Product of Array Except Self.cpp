class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int N = nums.size(), pref = 1, suff = 1;
        vector<int>ans(N, 1);
        for (int i=0; i<N; i++){
            ans[i] *= pref;
            pref *= nums[i];
            ans[N - i - 1] *= suff;
            suff *= nums[N - i - 1];
        }
        for (int i=0; i<N; i++)
            cout << ans[i] << ' ';
        return ans;
    }
};

// https://leetcode.com/problems/product-of-array-except-self/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int> >ans;
        ans.push_back(vector<int>{1});
        for (int i=1; i<numRows; i++){
            vector<int>v(i + 1, 1);
            for (int j=0; j<ans[i - 1].size(); j++)
                if (j + 1 < ans[i - 1].size())
                    v[j + 1] = ans[i - 1][j] + ans[i - 1][j + 1];
            ans.push_back(v);
        }
        return ans;
    }
};

// https://leetcode.com/problems/pascals-triangle/
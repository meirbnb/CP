class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans(2);
        map<int, int>in;
        for (auto match : matches)
            in[match[1] - 1]++;
        for (int  : in){
            if (in[p - 1] == 0)
                ans[0].push_back(p);
            else if (in[p - 1] == 1)
                ans[1].push_back(p);
        }
        return ans;
    }
};

// https://leetcode.com/problems/find-players-with-zero-or-one-losses/
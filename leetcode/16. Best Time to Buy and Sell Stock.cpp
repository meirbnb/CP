class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, cost = 1e4 + 4;
        for (int price : prices){
            cost = min(cost, price);
            ans = max(ans, price - cost);
        }
        return ans;
    }
};

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
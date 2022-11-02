class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 1;
        while(n--){
            long long t = (long long) a + b;
            a = b;
            b = t;
        }
        return a;
    }
};

// https://leetcode.com/problems/climbing-stairs/
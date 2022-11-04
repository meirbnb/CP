class Solution {
public:
    int next(int x, int su = 0){
        if (!x)
            return su;
        return next(x / 10, su + (x % 10) * (x % 10));
    }
    bool isHappy(int n) {
        int p = n;
        int q = next(n);
        while(p != q && p != 1){
            p = next(p);
            q = next(next(q));
        }
        return p == 1;
    }
};

// https://leetcode.com/problems/happy-number/

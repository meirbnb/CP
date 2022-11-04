class Solution {
public:
    bool isPowerOfThree(int n, int s=0) {
        if (n <= 0)
            return s==1;
        return isPowerOfThree(n / 3, s + n % 3);
    }
};

// https://leetcode.com/problems/power-of-three/
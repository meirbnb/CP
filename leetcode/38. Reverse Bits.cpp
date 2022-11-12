class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i=0; i<32; i++){
            uint32_t cur = (n >> i) & 1;
            ans |= (cur << 31 - i);
        }
        return ans;
    }
};

// https://leetcode.com/problems/reverse-bits/
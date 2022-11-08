class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for (int &num1 : nums1)
            for (int &num2 : nums2)
                if (num1 == num2 && num1 != -1)
                    ans.push_back(num1), num1 = num2 = -1;
        return ans;
    }
};

// https://leetcode.com/problems/intersection-of-two-arrays-ii/
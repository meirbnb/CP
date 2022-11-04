class Solution {
public:
    set<int>seen;
    bool containsDuplicate(vector<int>& nums) {
        for (int num : nums)
            if (seen.count(num))
                return true;
            else
                seen.insert(num);
        return false;
    }
};

// https://leetcode.com/problems/contains-duplicate/

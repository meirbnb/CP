class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>m;
        for (int i=0; i<nums.size(); i++){
            m[target - nums[i]] = -1;
            m[nums[i]] = i;
        }
        for (int i=0; i<nums.size(); i++){
            int j = m[target - nums[i]];
            if (i != j && j != -1){
                return vector<int>{i, j};
            }
        }
        return vector<int>{-1, -1};
    }
};

// https://leetcode.com/problems/two-sum/

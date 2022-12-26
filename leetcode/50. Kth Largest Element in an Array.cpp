class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int l = 0, r = nums.size() - 1;
        k = nums.size() - k;

        random_shuffle(nums.begin(), nums.end());

        while(l <= r){
            int pivot = nums[r];
            int ptr = l;

            for (int i=l; i<r; i++)
                if (nums[i] < pivot)
                    swap(nums[i], nums[ptr++]);
            swap(nums[ptr], nums[r]);

            if (ptr == k)
                break;
            if (ptr > k)
                r = ptr - 1;
            else
                l = ptr + 1;
        }

        return nums[k];
    }
};

// https://leetcode.com/problems/kth-largest-element-in-an-array/
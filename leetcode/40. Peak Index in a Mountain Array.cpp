class Solution {
public:
        int solve(vector<int>a, int l, int r){
	        if (l <= r){
	        
	            if (l == r)
	                return r;
	            
	            int m = l + (r - l) / 2;
	
	            if (a[m - 1] < a[m] && a[m] > a[m + 1])
			    return m;
	
	            if (a[m - 1] < a[m] && a[m] < a[m + 1])
			    return solve(a, m, r);
	
	            if (a[m - 1] > a[m] && a[m] > a[m + 1])
			    return solve(a, l, m);
	    
	        }

    	    return r;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return solve(arr, 0, arr.size() - 1);
    }
};

// https://leetcode.com/problems/peak-index-in-a-mountain-array/

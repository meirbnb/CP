class Solution {
public:
    string lcp(string a, string b, string ans=""){
        for (int i=0; i<min(a, b).size(); i++)
            if (a[i] == b[i])
                ans += a[i];
            else
                return ans;
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for (string str : strs)
            ans = lcp(ans, str);
        return ans;
    }
};

// https://leetcode.com/problems/longest-common-prefix/
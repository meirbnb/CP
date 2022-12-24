class Solution {
public:
    string countSort(string x){
        int cnt[26];
        fill(cnt, cnt + 26, 0);
        for (char &u : x)
            cnt[u-'a']++;
        string ans = "";
        for (int i=0; i<26; i++)
            ans += string(cnt[i], 'a'+i);
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        for (auto str : strs)
            mp[countSort(str)].push_back(str);
        vector<vector<string>>ans;
        for (auto u : mp)
            ans.push_back(u.second);
        return ans;
    }
};

// https://leetcode.com/problems/group-anagrams/
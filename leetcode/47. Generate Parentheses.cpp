class Solution {
public:
    vector<string>ans;
    bool valid(string x){
        stack<char>s;
        for (char chr : x){
            if (s.empty())
                s.push(chr);
            else {
                if (chr == ')' && s.top() == '(')
                    s.pop();
                else
                    s.push(chr);
            }
        }
        return s.empty();
    }
    void dfs(string s, int l, int r){
        if (l >= 2*r){
            if (valid(s))
                ans.push_back(s);
            return;
        }
        s += "(";
        dfs(s, l + 1, r);
        s.pop_back();
        s += ")";
        dfs(s, l + 1, r);
        s.pop_back();
    }
    
    vector<string> generateParenthesis(int n) {
        dfs("", 0, n);
        return ans;
    }
};

// https://leetcode.com/problems/generate-parentheses/
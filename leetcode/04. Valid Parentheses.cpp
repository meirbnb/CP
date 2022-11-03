class Solution {
public:
    string bucket;
    bool isValid(string s) {
        for (char c : s){
            if (bucket.size()){
                if (c == ')' && bucket.back() == '(')
                    bucket.pop_back();
                else if (c == ']' && bucket.back() == '[')
                    bucket.pop_back();
                else if (c == '}' && bucket.back() == '{')
                    bucket.pop_back();
                else
                    bucket += c;    
            } else {
                bucket += c;
            }
        }
        return bucket.empty();
    }
};

// https://leetcode.com/problems/valid-parentheses/
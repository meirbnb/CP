class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for (int k=1; k<=n; k++){
            string r = "";
            if (k % 3 == 0)
                r += "Fizz";
            if (k % 5 == 0)
                r += "Buzz";
            if (r.empty())
                r = to_string(k);
            ans.push_back(r);
        }
        return ans;
    }
};

// https://leetcode.com/problems/fizz-buzz/
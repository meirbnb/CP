class Solution {
public:
    int maximum69Number(int num){
        int ans = 0, ch = 0;
        string tmp = "";
        while(num > 0)
            tmp += to_string(num % 10), num /= 10;
        
        for (int i=0; i<tmp.length() / 2; i++)
            swap(tmp[i], tmp[tmp.length() - i - 1]);

        for (char &u : tmp){
            if (u == '6' && !ch)
                u = '9', ch = 1;
            ans = ans * 10 + u - '0';
        }
        return ans;
    }
};

// https://leetcode.com/problems/maximum-69-number/
class Solution {
public:
    int counter[int(1e3+3)];
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>occurances;
        for (int num : arr)
            ++occurances[num];
        for (auto [k, v] : occurances){
            if (counter[v])
                return false;
            counter[v] = 1;
        }
        return true;
    }
};

// https://leetcode.com/problems/unique-number-of-occurrences/

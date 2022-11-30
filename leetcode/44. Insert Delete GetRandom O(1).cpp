class RandomizedSet {
public:
    set<int>s;
    RandomizedSet() {
        s.clear();
    }
    
    bool insert(int val) {
        if (s.count(val))
            return false;
        s.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if (!s.count(val))
            return false;
        s.erase(val);
        return true;
    }

    int getRandom() {
        auto it = s.begin();
        int rix = rand() % s.size();
        advance(it, rix);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

// https://leetcode.com/problems/insert-delete-getrandom-o1/
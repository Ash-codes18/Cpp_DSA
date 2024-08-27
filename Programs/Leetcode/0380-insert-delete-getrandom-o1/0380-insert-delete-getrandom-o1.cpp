class RandomizedSet {
private:
    map<int,bool> mp;
    vector<int> arr;

public:
    bool insert(int val) {
        if(!mp[val]){
            mp[val]=true;
            arr.push_back(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(mp[val]){
            mp.erase(val);
            auto it = find(arr.begin(), arr.end(),val);
            arr.erase(it);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return arr[rand()%arr.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
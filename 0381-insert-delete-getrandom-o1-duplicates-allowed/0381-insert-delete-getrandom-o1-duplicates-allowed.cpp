class RandomizedCollection {
private:
    unordered_map<int,int> mp;
    vector<int> arr;

public:
    bool insert(int val) {
        if(!mp[val]){
            mp[val]++;
            arr.push_back(val);
            return true;
        }
        arr.push_back(val);
        mp[val]++;
        return false;
    }
    
    bool remove(int val) {
        if(mp[val]){
            mp[val]--;
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
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
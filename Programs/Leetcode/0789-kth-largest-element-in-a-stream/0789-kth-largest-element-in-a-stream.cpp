class KthLargest {

private:
    int ind;
    multiset<int> s;

public:
    KthLargest(int k, vector<int>& nums) {
        ind = k;
        for(int i : nums) s.insert(i);
    }
    
    int add(int val) {
        s.insert(val);
        int count = 0;
        int x = s.size()-ind;

        for(auto i : s){
            if(count==x) return i;
            count++;
        }
        return 0;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
class NumArray {
public:
    vector<int> pref;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        pref = vector<int>(n);
        partial_sum(nums.begin(),nums.end(),pref.begin());
    }
    
    int sumRange(int left, int right){
        int l;
        (left-1>=0) ? l = pref[left-1] : l=0;
        int r = pref[right];
        return r-l; 
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
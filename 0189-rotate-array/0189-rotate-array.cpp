class Solution {
public:
 void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    ios::sync_with_stdio(0);
    cin.tie(0);
    k=k%n;
    vector<int> result(n,0);
    
    for(int i=0;i<n;i++){
      result[(i+k)%n]=nums[i];
    }
    nums=result;
    }
};


//Better Approach




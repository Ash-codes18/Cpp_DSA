class Solution {
public:
 void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k=k%n;
    int z=k;
    vector<int> result;
    for(int i=0;i<k;i++){
        result.push_back(nums[n-z]);
        z--;
    }
    for(int i=0;i<n-k;i++){
        result.push_back(nums[i]);
    }
    for(int i=0;i<n;i++){
        nums[i]=result[i];
    }
}
};
//Bruteforce
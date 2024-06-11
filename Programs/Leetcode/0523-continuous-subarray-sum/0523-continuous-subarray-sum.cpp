// Approach-1 -> Bruteforce = TLE

/*
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        if(n<2){
            return false;
        }

        int sum = 0;

        for(int i =0;i<n;i++){
            for(int j =i;j<n;j++){
                sum+=nums[j];
                if(sum%k==0 && j-i>=1){
                    return true;
                }
            }
            sum=0;
        }

return false;

    }
};
*/



// Approach -2 

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int sum = 0;
        mp[0]=-1;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.find(sum%k)!=mp.end()){
                if(i-mp[sum%k]>=2){
                    return true;
                }
            }
            else{
                mp[sum%k]=i;
            }
        }


        return false;
    }
};

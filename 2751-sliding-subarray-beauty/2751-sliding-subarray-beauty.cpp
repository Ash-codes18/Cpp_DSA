class Solution {

public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int n = nums.size();
        int j=0, ngc=0;
        map<int,int> mp;
        vector<int> ans;

        for(int i=0;i<k;i++){
            if(nums[i]<0){
                ngc++;
            }
            mp[nums[i]]++;
        }

        if(ngc<x) ans.push_back(0);
        else{
            int count = 1;
            for(auto i : mp){
                if(count==x && i.second>0){
                    ans.push_back(i.first);
                    i.second--;
                    break;
                }
                if(i.second>0) count+=i.second;
                if(count>x){
                    ans.push_back(i.first);
                    i.second--;
                    break;  
                }
            }
        }

        for(int i=k;i<n;i++){
            if(mp[nums[j]]>0) mp[nums[j]]--;
            if(nums[j++]<0) ngc--;
            if(nums[i]<0) ngc++;
            mp[nums[i]]++;
            if(ngc<x) ans.push_back(0);
            else{
                int count = 1;
                for(auto i : mp){
                    if(count==x && i.second>0){
                        ans.push_back(i.first);
                        i.second--;
                        break;
                    }
                    if(i.second>0) count+=i.second;
                    if(count>x){
                        ans.push_back(i.first);
                        i.second--;
                        break;  
                    }
                }
            }     
        }


        return ans;

    }
};
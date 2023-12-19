class Solution {
public:
    int findLucky(vector<int>& arr) {
        int freq[501]={0};
        vector<int> req;

        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }   

        for(int i=1;i<500;i++){
            if(freq[i]==i){
                req.push_back(i);
            }
        }

        int ans=-1;

        for(int i=0;i<req.size();i++){
            if(req[i]>ans){
                ans=req[i];
            }
        }

return ans;

    }
};
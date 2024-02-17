class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
    vector<int> count;

    for(auto i:mp){
        count.push_back(i.second);
    }


    sort(count.begin(),count.end());

    for(int i=0;i<count.size();i++){
        if(k<=0){
            break;
        }
        if(count[i]<=k){
            k-=count[i];
            count[i]=0;
        }
    } 

    int ans=0;

    for(int i:count){
        if(i>0){
            ans++;
        }
    }

        return ans;

    }
};
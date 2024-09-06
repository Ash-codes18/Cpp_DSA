// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<pair<int,int>> v;
//         unordered_map<int,int> mp;

//         for(int &i : nums) mp[i]++;

//         for(auto &i : mp){
//             v.push_back({i.second,i.first});
//         }

//         sort(v.rbegin(),v.rend());

//         vector<int> ans(k);

//         for(int i=0;i<k;i++){
//             ans[i]=v[i].second;
//         }

//         return ans;
//     }
// };


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int,int>> v(10001);
        int maxe = INT_MIN;
    
        for(int &i : nums){
            if(i>0){
                v[i].first++;
                maxe = max(maxe,v[i].first);
            }
            else{
                v[abs(i)].second++;
                maxe = max(maxe,v[abs(i)].second); 
            }
        }

        vector<vector<int>> arr(1000001);

        for(int i=0;i<=10000;i++){
            if(v[i].first>0) arr[v[i].first].push_back(i);
            if(v[i].second>0) arr[v[i].second].push_back(-i);
        }


        vector<int> ans;

        cout<<"Element : Frequency"<<endl;

        for(int i=maxe;i>=0;i--){
            if(arr[i].size()>0){
                for(int j=0;j<arr[i].size();j++){
                    cout<<arr[i][j]<<" : "<<i<<endl;
                }
            }
        }

        for(int i=maxe;i>=0 && k>0;i--){
            if(arr[i].size()>0){
                for(int j=0;j<arr[i].size() && k>0;j++){
                    ans.push_back(arr[i][j]);
                    k--;
                }
            }
        }

        return ans;
    }
};
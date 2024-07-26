class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        
        int n = arr.size();
        if(k==n) return arr;
        vector<pair<int,int>> v;

        for(int i=0;i<n;i++){
            v.push_back({abs(arr[i]-x),arr[i]});
        }

        vector<int> ans;
        sort(v.begin(),v.end());

        int count = 0;

        for(auto &i : v){
            if(count == k) break; 
            ans.push_back(i.second);
            count++;
        }

        sort(ans.begin(),ans.end());

        return ans;

    }
};
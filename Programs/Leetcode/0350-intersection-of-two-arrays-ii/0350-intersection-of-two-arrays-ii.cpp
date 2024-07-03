// Approach-1 : Using Hashmap

// class Solution {
// public:
//     vector<int> intersect(vector<int>& a, vector<int>& b) {
//         vector<int> ans;
//         unordered_map<int,int> mp;

//         for(int i : a) mp[i]++;
//         for(int i : b){
//             if(mp.find(i)!=mp.end() && mp[i]>0){
//                 ans.push_back(i);
//                 mp[i]--;
//             }
//         }

//         return ans;

//     }
// };



// Approach-2 : Sorting && 2-pointers

class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int n = a.size();
        int m = b.size();
        int i = 0, j = 0;

        while(i<n && j<m){
            if(a[i]==b[j]){
                ans.push_back(a[i]);
                i++;
                j++;
            }
            
            else if(a[i]>b[j]) j++;    
            else i++;
        
        }

        return ans;

    }
};
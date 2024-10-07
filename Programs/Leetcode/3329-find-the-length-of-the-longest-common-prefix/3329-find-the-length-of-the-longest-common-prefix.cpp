class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        ios::sync_with_stdio(0);
        cin.tie(0);
       
        int n = arr1.size();
        int m = arr2.size();

        unordered_set<int> st;

        for(int i=0;i<n;i++){
            int ele = arr1[i];
            while(ele>0){
                st.insert(ele);
                ele/=10;
            }
        }

        int ans = 0;

        for(int i=0;i<m;i++){
            int ele = arr2[i];
            while(ele>0){
                if(st.find(ele)==st.end()) ele/=10;
                else break;
            }
            if(ele!=0){
                int n = to_string(ele).length();
                ans = max(ans,n);
            }
        }

        return ans;
    }
};
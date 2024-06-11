class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();

        map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[arr1[i]]++;
        }

        int i = 0;
        int ind = 0;

        while(ind < m){
            while(mp[arr2[ind]]--){
                arr1[i++]=arr2[ind];
            }            
            ind++;
        }


        vector<int> temp;
        int j = i;

        for(auto i : mp){
            while(i.second>0){
                arr1[j++]=i.first;
                i.second--;
            }
        }


    return arr1;

    }
};
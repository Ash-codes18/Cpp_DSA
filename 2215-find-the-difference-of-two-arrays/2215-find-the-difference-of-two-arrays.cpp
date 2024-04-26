class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        int n = nums1.size();
        int m = nums2.size();
        
        map<int,bool> mp;
        map<int,bool> mp2;
        set<int> vec1;
        set<int> vec2;

        for(int i=0;i<n;i++){
            mp[nums1[i]]=true;
        }


        for(int i=0;i<m;i++){
            mp2[nums2[i]]=true;
            if(!mp[nums2[i]]){
                vec2.insert(nums2[i]);
            }
        }

        for(int i=0;i<n;i++){
            if(!mp2[nums1[i]]){
                vec1.insert(nums1[i]);
            }
        }

vector<int> v1;
vector<int> v2;


for(int i:vec1){
    v1.push_back(i);
}

for(int i:vec2){
    v2.push_back(i);
}


ans.push_back(v1);
ans.push_back(v2);


    return ans;


    }
};
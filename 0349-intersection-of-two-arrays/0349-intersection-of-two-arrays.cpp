class Solution {
public:
   vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> result;
    vector<int> ans;
    
    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                result.insert(nums1[i]);
                break;
            }
        }
    }

//     vector<int> fin(result.size());
//     // sort(result.begin(),result.end());
//                 int z=0;
//     for(int i=0;i<result.size();i++){
//                 if(result[i]!=fin[z]){
//                     fin.push_back(result[i]);
//                     z++;
//                 }
//     }
//     return fin;
// }

    for(int i:result){
        ans.push_back(i);
    }


    return ans;

   }

};
// Approach-1 

// class Solution {
// public:
//     int numberOfSpecialChars(string word) {
//         vector<bool> small(26);
//         vector<bool> caps(26);
//         vector<bool> ans(26);

//         int count = 0;

//         for(int i=0;i<word.length();i++){
//             char c = word[i];
//             if(islower(c)){
//                 small[c-'a']=1;
//                 if(caps[c-'a']){
//                     ans[c-'a']=0;
//                 }
//             }
//             else{
//                 if(caps[c-'a'+32]) continue;
//                 caps[c-'a'+32] = 1;
//                 if(small[c-'a'+32]) ans[c-'a'+32] = 1;
//             }
//         }


//         for(int i=0;i<26;i++){
//             if(ans[i]==1) count++; 
//         }

//         return count;
//     }
// };




// Approach - 2


class Solution {
public:
    int numberOfSpecialChars(string word) {
       
        ios::sync_with_stdio(0);
        cin.tie(0);
       
        vector<int> small(26,-1);
        vector<int> caps(26,-1);
        
        for(int i=0;i<word.length();i++){
            char c = word[i];
            if(islower(c)) small[c-'a'] = i; 
            else{
                if(caps[c-'a'+32]==-1) caps[c-'a'+32]=i; 
            }
        }


        int ans = 0;

        for(int i=0;i<26;i++){
            if(caps[i]>small[i] && small[i]!=-1) ans++;
        }

        return ans;
    }
};

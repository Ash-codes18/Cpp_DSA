class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int arr[26]={0};
        int val;
        
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(arr[i]>0){
               val=arr[i];
               break;
            }
        }

        // for(int i:arr){
        //     cout<<i<<" ";
        // }
        // cout<<endl<<val<<endl;

        for(int i=0;i<26;i++){
            if(arr[i]>0 && arr[i]!=val){
                return false;
                // cout<<"false";
                // break;
            }
        }
        
        // cout<<"TRUE";
        return true;
    }
};
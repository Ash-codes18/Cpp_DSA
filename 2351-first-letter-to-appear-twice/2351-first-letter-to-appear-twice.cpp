class Solution {
public:
    char repeatedCharacter(string s) {

        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;

            for(int j=0;j<26;j++){
                if(arr[j]==2){
                    return j+'a';
                }
            }

        }
        return s[0];
    }
};
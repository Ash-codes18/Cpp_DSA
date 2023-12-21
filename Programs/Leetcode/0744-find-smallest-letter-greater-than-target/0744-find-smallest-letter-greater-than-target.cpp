class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
            if(target-'a'==25){
                return letters[0];
            }
        
        
        int n=letters.size();
        
        int min=INT_MAX;
        char ans;

        for(int i=0;i<n;i++){
            if((letters[i]-'a')<min && letters[i]-'a'>target-'a'){
                min=letters[i]-'a';
                ans= letters[i];
            }
        }

        if(min==INT_MAX){
            return letters[0];
        }

        return ans;
        
    }
};
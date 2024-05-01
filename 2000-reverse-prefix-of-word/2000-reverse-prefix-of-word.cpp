class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length();
        int m=0;

        for(int i =0;i<n;i++){
            if(word[i]==ch){
                m=i;
                break;
            }
        }

        if(m){
            reverse(word.begin(),word.begin()+m+1);
        }

        return word;

    }
};
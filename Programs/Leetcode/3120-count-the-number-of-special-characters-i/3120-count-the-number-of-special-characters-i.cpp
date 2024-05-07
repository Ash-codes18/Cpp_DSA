class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        int n = word.length();
        vector<int> arr(128,0);
        int count=0;

        for(int i=0;i<n;i++){
            arr[word[i]]++;
        }

        int a=65,b=97;


        while(a<97){
            if((arr[a]>0 && arr[b]>0)){
                count++;
            }
                a++;
                b++;
        }



        return count;

    }
};
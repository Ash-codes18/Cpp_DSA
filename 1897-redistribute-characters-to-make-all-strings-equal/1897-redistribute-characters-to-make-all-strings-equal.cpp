class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int arr[26]={0};
        int n=words.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].length();j++){
                arr[words[i][j]-'a']++;
            }
        }


        // for(int i : arr){
        //     cout<<i<<" ";
        // }


        for(int i : arr){
            if(i%n!=0){
                return false;
            }
        }

        return true;

    }
};
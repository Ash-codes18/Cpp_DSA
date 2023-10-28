class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
            int n=sentences.size();
            vector<int> count(n,0);


            for(int i=0;i<n;i++){
                for(int j=0;j<sentences[i].length();j++){
                    if(sentences[i][j]==' '){
                        count[i]++;
                    }
                }
                count[i]++;
            }

            int max=count[0];
            for(int i=0;i<n;i++){
                if(count[i]>max){
                    max=count[i];
                }
            }
return max;
    }
};
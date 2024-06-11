class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        int n = words.size();
        int i=1,j =0;

        while(i<n){
            
            string a = words[j];
            string b = words[i];
            sort(a.begin(),a.end());            
            sort(b.begin(),b.end());

            if(a==b){
                words.erase(words.begin()+i);
                n--;
            }
            else{
                i++;
                j++;
            }          

        }



return words;

    }
};
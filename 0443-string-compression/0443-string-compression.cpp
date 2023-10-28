// Approach-1 = fails when more than 1 group for same character

/*
class Solution {
public:
    int compress(vector<char>& chars) {
        int arr[26]={0};
        int n=chars.size();

        for(int i=0;i<n;i++){
            arr[chars[i]-'a']++;
        }

        chars.clear();
        string result;

        for(int i=0;i<26;i++){
            if(arr[i]>0){
                result+=i+'a';
                if(arr[i]>1){
                    string val=to_string(arr[i]);
                    result += val;
                }
            }
        }
    
    int m=result.length();
    for(int i=0;i<m;i++){
        chars.push_back(result[i]);
    }

    return m;

    }
};

*/

class Solution {
public:
    int compress(vector<char>& chars) {

        int n=chars.size();
        int count=1;
        string result;

        int i=0;
        while(i<n){
            for(;i<n-1;i++){
                if(chars[i]==chars[i+1]){
                    count++;
                }
                else{
                    result+=chars[i];
                    if(count>1){
                        result+=to_string(count);
                    }
                    count=1;
                }
            }
            i++;
        }
//for last character
        result += chars[n - 1];
        if (count > 1) {
            result += to_string(count);
        }

    chars.clear();

    for(int i=0;i<result.length();i++){
        chars.push_back(result[i]);
    }
    
    return result.length();

    }
};
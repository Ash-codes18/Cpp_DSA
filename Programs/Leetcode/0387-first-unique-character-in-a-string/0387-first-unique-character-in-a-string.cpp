class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> indices;
        int n=s.length();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(s[i]==s[j]){
                    count++;
                }
                if(count>1){
                    break;
                }
            }
            if(count==1){
                indices.push_back(i);
            }
        }

if(indices.empty()){
    return -1;
}

        sort(indices.begin(),indices.end());

        return indices[0];
    }
};
class Solution {
public:
    void reverseString(vector<char>& s) {
        int e=s.size()-1;
        int b=0;
        while(e>b){
            swap(s[e--],s[b++]);
        }
    }
};
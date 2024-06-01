class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = words.size();
        string a;

        for(string i : words){
            a.push_back(i[0]);
        }


    return a==s;

    }
};
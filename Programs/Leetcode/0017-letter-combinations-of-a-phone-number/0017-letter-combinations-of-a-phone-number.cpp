class Solution {
public:

    void solve(string mapping[], string digits, string output, int ind, vector<string>& ans){

        if(ind>=digits.length()){
            ans.push_back(output);
            return;
        }

        int value=digits[ind]-'0';
        string elements = mapping[value];

        for(int i=0;i<elements.length();i++){
            output.push_back(elements[i]);
            solve(mapping,digits,output,ind+1,ans);
            output.pop_back();
        }

    }


    vector<string> letterCombinations(string digits) {

        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int ind=0;
        string output;
        vector<string> ans;


        if(digits.empty()){
            return ans;
        }

        solve(mapping,digits,output,ind,ans);
        return ans;

    }
};
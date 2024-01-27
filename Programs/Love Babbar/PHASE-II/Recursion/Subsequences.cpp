#include <iostream>
#include <vector>
using namespace std;


void subsq(string s, string output, int ind, vector<string>& ans) {
    if (ind >= s.length()) {
        if (!output.empty()) {
            ans.push_back(output);
        }
        return;
    }
    subsq(s, output, ind + 1, ans);
    subsq(s, output + s[ind], ind + 1, ans);
}


int main() {

    string s;
    cout<<"Enter a string with no spaces : ";
    cin>>s;

    string output;
    int ind=0;
    vector<string> ans;

    subsq(s,output,ind,ans);

    cout<<"The Subsequences of the string are : "<<endl;
    for(string i : ans){
        cout<<i<<endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Insert function here
string replaceSpaces(string &str){
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            str.erase(i, 1);
            str.insert(i, "@40");
            n+=2;
        }
    }
    return str;
}





int main()
{
    // vector<int> v{9,6,4,2,3,5,7,0,1};
    string str="you can practice coding on codezen";
    cout<<replaceSpaces(str);

    // for(int i:v){
    //     cout<<i<<" ";
    // }


    return 0;
}

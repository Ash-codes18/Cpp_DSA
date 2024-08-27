#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> arr = {"This","is","a","test","string"};
    for(string &i : arr){
        sort(i.begin(),i.end());
    }
    sort(arr.begin(),arr.end());

    for(string &i : arr){
        cout<<i<<endl;
    }

    return 0;
}
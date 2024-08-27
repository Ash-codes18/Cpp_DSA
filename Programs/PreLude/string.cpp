#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int arr[26]={0};
    string s;
    cin>>s;
    for(char c : s){
        arr[c-'a']++;
    }

    for(int i=0;i<26;i++){
        if(arr[i]>0){
            cout<<(char)('a'+i)<<" : "<<arr[i]<<endl;
        }
    }

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s[n];

    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(s[i].length() > s[j].length()){
                string temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            else if(s[i].length() == s[j].length()){
                if(s[i] > s[j]){
                    string temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }

    return 0;
}
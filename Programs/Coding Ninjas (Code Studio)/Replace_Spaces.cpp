#include <bits/stdc++.h> 
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
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



//approach-2

#include <bits/stdc++.h> 
string replaceSpaces(string &str){
    string temp;
    int n=str.length();
    for(int i=0;i<n;i++){

        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }

        else{
            temp.push_back(str[i]);
        }

    }
    return temp;
}



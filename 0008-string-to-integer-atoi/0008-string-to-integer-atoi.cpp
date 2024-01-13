class Solution {
public:


void removeZero(string &str) 
{ 

    int i = 0; 
    while (str[i] == '0'){
        i++; 
    }
  

    str.erase(0, i); 
  
} 

    int myAtoi(string s) {
        int n=s.length();

        bool word=0;
        bool negative=0;
        bool positive=0;
        bool floating=0;
        int count=0;
        string temp;

        for(int i=0;i<n;i++){

           if(s[i]=='-' && temp.empty()){
               negative=1;
           }


           if(s[i]=='.'){
               floating=1;
               count=temp.length();
           }

           if(temp.empty() && s[i]==' '){
               continue;
           }

           else if(!temp.empty() && s[i]==' '){
               break;
           }

           if(isalpha(s[i])){
               word=1;
           }

           if(isdigit(s[i]) && !word ){
               temp+=s[i];
           }
           if(i+1<n && !isdigit(s[i+1])){
               break;
           }
        }
                 

if(floating){
    int x=temp.length();
    for(int i=count;i<x;i++){
        temp.pop_back();
    }
}


removeZero(temp);


if(temp.empty()){
    return 0;
}

int m=temp.length();


if(m>10 && negative){
    return INT_MIN;
}

if(m>10 && !negative){
    return INT_MAX;
}


if(m==10){
    string max=to_string(INT_MAX);
    if(max<temp && negative){
        return INT_MIN;
    }
    else if(max<temp){
        return INT_MAX;
    }
}




if(negative){
    return -stoi(temp);
}

return stoi(temp);

    }
};
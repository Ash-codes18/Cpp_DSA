string reverseOrderWords(string str) {
    int z=str.length()-1;
    int n = z;
    string ans;
    int i=0;

    while(n>=0){

        if(n==0){
            while(str[n]!=' '  && n!=z+1){
                ans+=str[n];
                n++;
            }
            break;
        }

        else if(str[n]==' '){
            int j=n+1;
            while(i--){
                ans+=str[j++];
            }
            ans+=' ';
        }
        i++;
        n--;
    }

    return ans;

}
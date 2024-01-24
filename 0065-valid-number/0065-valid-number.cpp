    class Solution {
    public:
        bool isNumber(string s) {

            int n = s.length();
            int dot = 0, ecount=0;
            bool e = false;
            bool num=false;
            bool dbe = false;  

            
            int i=0,j=n-1;
            
            if(s[i]=='+' || s[i]=='-'){    
                i++; 
            } 
            
            if(i>j){
                return false;
            }  

            for(;i<=j;i++){

                if(isdigit(s[i])){
                    num=true;
                }

                if(s[i]=='.'){
                    dot++;
                    if(dot>1 || e){
                        return false;
                    }
                }

                else if(s[i]=='e' || s[i]=='E'){
                    e=true;
                    ecount++;

                    if(!dbe || i==j){
                        return false;
                    }  
                    dbe = false;

                    if(s[i+1]=='+' || s[i+1]== '-'){
                        i++;
                    }

                    if(i==j){
                        return false;
                    } 
                } 
                
                else if(!isdigit(s[i])){
                    return false; 
                }
                
                else{
                    dbe = true;  
                }
            }

            if(ecount>1){
                return false;
            }

            if(!num && !e){
                return false;
            }

            return true;
        }
    };

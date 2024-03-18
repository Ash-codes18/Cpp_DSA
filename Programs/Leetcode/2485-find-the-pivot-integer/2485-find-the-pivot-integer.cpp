class Solution {
public:
    int pivotInteger(int n) {
        
        int i=1;
        int s=0,e=0;


        while(i<n){


            if(s<=e){
                s+=i;
                i++;
            }
            else{
                e+=n;
                n--;
            }
        }

        if(s!=e){
            return -1;
        }

return i;
    }
};
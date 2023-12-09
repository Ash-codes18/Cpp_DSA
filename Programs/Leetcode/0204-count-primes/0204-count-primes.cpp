// approach-1 : TLE
/*
class Solution {
public:
    int countPrimes(int n) {
        if(n<2){
            return 0;
        }
      
        int count=0;
        
        for(int i=2;i<n;i++){
            int flag=1;
            for(int j=2;j<=sqrt(i);j++){
                if(i!=j  && i%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag){
                count++;
            }
        }
       return count; 
    }
};

*/

//approach-2 : using algo called sieve of eratosthenes in O(n)


class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool> arr(n+1,true);
        int count=0;
        arr[0]=false;
        arr[1]=false;

        for(int i=2;i<n;i++){
            if(arr[i]==true){
                count++;
                int temp=i+i;
                while(temp<n){
                    arr[temp]=false;
                    temp+=i;
                }
            }
        }



        return count;
    }

};

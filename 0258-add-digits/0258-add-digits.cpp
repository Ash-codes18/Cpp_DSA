class Solution {
public:
  int addDigits(int num) {
        if(num<10){
            return num;
        }
        
        int sum=0;
        int a;
        while(num>0){
            a=num%10;
            sum+=a;
            num/=10;
        }
       return addDigits(sum);
    }
};  
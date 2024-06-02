// Approach-1 -> bruteforce = failed

// class Solution {
// public:
//     int numSteps(string s) {
//         int n = s.length();
//         long long val=0;
//         int count = 0;

//         for(int i = n-1;i>=0;i--){
//             if(s[i]=='1'){
//                 val+=pow(2,n-i-1);
//             }
//         }

//         while(val>1){
//             if(val%2==0){
//                 val/=2;
//                 count++;
//             }
//             else{
//                 val++;
//                 count++;
//             }
//         }


//         return count;


//     }
// };



class Solution {
public:
    int numSteps(string s) {
        
        int n = s.length();
        int ans = n-1, carry = 0;
   
        for(int i=n-1;i>0;i--){
            if(s[i]-'0'+carry == 1){
                ans++;
                carry=1;
            }
        }


        return ans+carry;


    }
};


class Solution{
private:
    int mod = 1e9+7;

    long long myPow(long long x, long long power) {
        long long result=1;

        while(power>0){
            if(power%2==1){
                result*=x;
                result%=mod;
            }
            x*=x;
            x%=mod;
            power/=2;
        }

        return result%mod;
    }


public:
    int countGoodNumbers(long long n) {
        int mod = 1e9+7;
        long long ans = 1;

        long long p = (n+1)/2;
        long long e = n/2;

        long long ne = myPow(5,p); 
        long long np = myPow(4,e);

        ans = ne*np;

        return ans%mod;
    }
};


// class Solution {
// private:
//     bool Even(char &i){
//         if((i-'0')%2==0) return true;
//         return false;
//     }

//     bool Prime(char &i){
//         unordered_map<int,bool> mp;
//         mp[2] = 1;
//         mp[3] = 1;
//         mp[5] = 1;
//         mp[7] = 1;
//         if(!mp[i-'0']) return false;
//         return true;
//     }

//     void incrementer(string &s){
//         int carry = 0;
//         int num = 1;
//         int ind = 0;
//         reverse(s.begin(),s.end());

//         while((num || carry) && ind<s.length()){
//             int last = s[ind]-'0';
//             last+=(num+carry);
//             num=0;
//             carry = last/10;
//             last = last%10;
//             s[ind++] = last+'0';
//         }
//         if(carry) s.push_back('1');
//         reverse(s.begin(),s.end());
//     }

// public:
//     int countGoodNumbers(long long n) {
//         int mod = 1e9+7;
//         int ans = 0;
//         string num="0";

//         while(num.length()<=n){
//             bool flag = true;
//             for(int i=0;i<num.length();i++){
//                 if(i%2==0){
//                     if(!Even(num[i])){
//                         flag = false;
//                         break;
//                     }
//                 }
//                 else{
//                     if(!Prime(num[i])){
//                         flag = false;
//                         break;
//                     }
//                 }
//             }
//             if(flag){
//                 ans++;
//                 // cout<<num<<" : "<<ans<<endl;
//             }
//             incrementer(num);
//             ans%=mod;
//         }

//         return ans;
//     }
// };
class Solution {
public:
    int mySqrt(int x) {
        long long int a = 0;
        
        // for (long long int i = 0; (i * i) <= x; i++) {
        //     a = i;
        // }
        

        //using binary search

         int s=0,e=x;
        long long int mid=(s+e)/2;
        while(s<=e){
            if(mid*mid==x){
                return mid;
            }
            if(mid*mid>x){
                e=mid-1;
            }
            else {
                s=mid+1;
            }
            mid=(s+e)/2;
        }

        // return a;
        return mid;
    }
};

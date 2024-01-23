// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        int s=0;
        int mid;

        while(s<n){
            mid=s-((s-n)/2);

            if(isBadVersion(mid)==true && isBadVersion(mid-1)==false){
                return mid;
            }
            else if(isBadVersion(mid)==false){
                s=mid+1;
            }
            else{
                n=mid-1;
            }

        }

        return n;

        
    }
};
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */


//Approach-1 -> O(n) : failing 1 test case

/*
class Solution {
public:
    int guessNumber(int n) {
        for(int i=1;i<=n;i++){
            int val=guess(i);
            if(val==0){
                return i;
            }
        }
        return n;
    }
};
*/


//Approach-2 -> 2 pointers -> O(logn)

class Solution {
public:
    int guessNumber(int n) {
       
        int s=0;
        int e=n;
        int mid;

        while(s<=e){
            mid=s-((s-e)/2);
            if(guess(mid)==0){
                return mid;
            }
            else if(guess(mid)==1){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
return n;

    }
};
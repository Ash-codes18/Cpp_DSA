//Approach-1 : Bruteforce -> O(n^2)

/*
class Solution {
public:

int countzeros(string s, int end){
    int count=0;
    while(end--){
        if(s[end]=='0'){
            count++;
        }
    }
    return count;
}

int countones(string s, int start, int end){
    int count=0;
    while(start<end){
        if(s[start++]=='1'){
            count++;
        }
    }
    return count;
}

    int maxScore(string s) {
        int n=s.length();
        int ones,zeros;
        int maxscore=INT_MIN;
        string left,right;


        for(int i=0;i<n-1;i++){
            zeros=countzeros(s,i+1);
            ones=countones(s,i+1,n);
            if(ones+zeros>maxscore){
                maxscore=ones+zeros;
            }
        }

        return maxscore;

    }
};

*/

// Approach-2 : Intuitive Approach -> O(n)  {Through Hints}

class Solution {
public:

    int maxScore(string s) {
        int n=s.length();
        int ones=0;
        int zeros=0;
        int score=0;

        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ones++;
            }
        }

        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                zeros++;
            }
            else{
                ones--;
            }
            if(zeros+ones>score){
                score=zeros+ones;
            }
        }

        return score;

    }
};
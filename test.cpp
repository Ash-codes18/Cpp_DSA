#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Insert function here

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
        int max=INT_MIN;
        string left,right;


        for(int i=0;i<n-1;i++){
            zeros=countzeros(s,i+1);
            ones=countones(s,i+1,n);
            if(ones+zeros>max){
                max=ones+zeros;
            }
        }

        return max;

    }



int main()
{
    // vector<int> v{9,6,4,2,3,5,7,0,1};
 cout<<maxScore("011101");

    // for(int i:v){
    //     cout<<i<<" ";
    // }


    return 0;
}

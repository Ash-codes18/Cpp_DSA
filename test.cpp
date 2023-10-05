#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Insert function here
    char getMaxOccuringChar(string str)
    {
        // Your code here

        int arr[26]={0};

        for(int i=0;i<str.length();i++){
            arr[str[i]-'a']++;
        }

        int max=0;
        char ans='a';
        
        for(int i=0;i<26;i++){

             if(arr[i]>max){
                max=arr[i];
                ans=i+'a';
            }

            else if(arr[i]==max && i+'a'<ans){
                    ans=i+'a';
            }

        }
        return ans;

    }




int main()
{
    // vector<int> v{9,6,4,2,3,5,7,0,1};
    char a=getMaxOccuringChar()");
    cout<<a<<endl;

    // for(int i:v){
    //     cout<<i<<" ";
    // }


    return 0;
}

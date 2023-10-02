#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Insert function here


int findmax(int arr[], int n){
    int max=arr[0];
    int index=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
        max=arr[i];
        index=i;
        }
    }
    return index;
}


char find_duplicates(int arr[],string s, int n, int index){
    vector<int> indices;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[index]){
            indices.push_back(i);
        }
    }

    char ans=s[index];

    for(int i=0;i<indices.size();i++){
        if (ans>s[indices[i]]){
            ans = s[indices[i]];
        }
    }
    return ans;

}

    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int n=str.length();
        int arr[n]={0};

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && str[i]==str[j]){
                    arr[i]++;
                }
            }
        }

        int max_index=findmax(arr,n);

        char dups=find_duplicates(arr,str,n,max_index);


return dups;

    }




int main()
{
    // vector<int> v{9,6,4,2,3,5,7,0,1};
    cout<<getMaxOccuringChar("vhqvoi");

    // for(int i:v){
    //     cout<<i<<" ";
    // }


    return 0;
}

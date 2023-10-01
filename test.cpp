#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Insert function here
 vector<int> plusOne(vector<int>& digits) {

        int n=digits.size();
        int carry=1;

        for(int i=n-1;i>=0;i--){

            if(i==0 && digits[i]==9){
                digits.insert(digits.begin(),1);
                digits[i+1]=0;
            }

                else if(digits[i]==9){
                     digits[i]=0;
                }
                else{
                     digits[i]+=1;
                     break;
                }
        }
        return digits;
    }

int main()
{
    vector<int> v{9};
    plusOne(v);

    for(int i:v){
        cout<<i<<" ";
    }


    return 0;
}

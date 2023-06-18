#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cin>>n;

     int i = 0;
    bool flag = false;
    while (i <= 30)
    {
        int checker = pow(2, i);
        // cout<<checker<<endl;
        if (checker == n)
        {
            flag = true;
            break;
        }
        i++;
    }
    if (flag)
    {
         cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}

/*
Direct ans: 

class Solution {
public:
    bool isPowerOfTwo(int n) {
       int i = 0;
    bool flag = false;
    while (i <=30)
    {
        int checker = pow(2, i);
        if (checker == n)
        {
            flag = true;
            break;
        }
        i++;
    }
    if (flag)
    {
         return true;
    }
    else
    {
        return false;
    }
    }
};

*/
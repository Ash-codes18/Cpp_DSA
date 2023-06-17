#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int sum=0;
    int product=1;

    int sn=n;

    while (sn>0)
    {   
        int a=sn%10;
        sum=sum+a;
        product=product*a;
        sn=sn/10;
    }
    
    cout<<product-sum;

    return 0;
}


/* Direct ans : 

class Solution {
public:
    int subtractProductAndSum(int n) {
    int sum=0;
    int product=1;

    int sn=n;

    while (sn>0)
    {   
        int a=sn%10;
        sum=sum+a;
        product=product*a;
        sn=sn/10;
    }
    
    return product-sum;
    }
};

*/


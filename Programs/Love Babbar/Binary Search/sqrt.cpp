#include <iostream>
using namespace std;

sqrt(int x){
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
        return mid;
}

int main(){

    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    int ans=sqrt(n);
    cout<<"The square root of "<<n<<" is : "<<ans;

    return 0;
}
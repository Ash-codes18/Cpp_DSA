#include <iostream>
using namespace std;

int sqrt(int x){
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

double precision(int a,int p,int x){

    double factor=1;
    double j;
    for(int i=0;i<p;i++){
        factor/=10;
        // for(double j=ans;j*j<x;j=j+factor){
        // }
        j=a;
        while(j*j<x){
            j=j+factor;
            
        }
    }
return j;
}

int main(){

    int n,p;
    cout<<"Enter a no. : ";
    cin>>n;
    cout<<"Enter the precision till where you want the answer : ";
    cin>>p;
    int temp_ans=sqrt(n);
    double ans=precision(temp_ans,p,n);
    cout<<"The answer precised upto "<<p<<" decimal places is : "<<ans;

    return 0;
}
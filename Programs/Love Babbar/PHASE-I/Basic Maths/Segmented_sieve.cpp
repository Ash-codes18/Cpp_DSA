// algo so find the number of primes nos. till n in O(N*log(log(n)))
//Incomplete


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int algo(int n){
        
        int max=floor(sqrt(n))+1;
        vector<int> prime(max+1,true);

        for(int i=2;i*i<max;i++){
            for(int j=i*i;j<max;j+=i){
                prime[j]=false;
            }
        }

        for(int i=0;i<max;i++){
            cout<<prime[i]<<" ";
        }

return 0;
        // return count;

}


int main(){

    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    cout<<"The number of prime nos till n = "<<algo(n);

    return 0;
}
// algo so find the number of primes nos. till n in O(N*log(log(n)))

#include <iostream>
#include <vector>
using namespace std;


int algo(int n){
        
        vector<bool> arr(n+1,true);
        int count=0;
        arr[0]=false;
        arr[1]=false;

        for(int i=2;i<n;i++){
            if(arr[i]==true){
                count++;
                int temp=i+i;
                while(temp<n){
                    arr[temp]=false;
                    temp+=i;
                }
            }
        }



        return count;

}


int main(){

    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    cout<<"The number of prime nos till n = "<<algo(n);

    return 0;
}
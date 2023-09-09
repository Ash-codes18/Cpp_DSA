//2 Test cases failed

#include <iostream>
using namespace std;

int main(){

    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int i=0;
        int arr[n];
        int j=2;
        while(i<n){
            int flag=0;
            for(int k=2;k<=j/2;k++){
                if(j%k==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                arr[i]=j;
                i++;
            }
            j++;
        }
        cout<<arr[n-1]<<endl;
    }
    

    return 0;
}


//Chat-GPT soln

#include <iostream>
using namespace std;

const int MAX_SIZE = 1000000;  // Adjust the maximum size as needed

int main() {
    int t, n;
    cin >> t;

    bool isPrime[MAX_SIZE + 1];
    int primes[MAX_SIZE];
    int primeCount = 0;

    for (int i = 2; i <= MAX_SIZE; ++i) {
        isPrime[i] = true;
    }

    for (int p = 2; p <= MAX_SIZE; ++p) {
        if (isPrime[p]) {
            primes[primeCount++] = p;
            for (int i = p * 2; i <= MAX_SIZE; i += p) {
                isPrime[i] = false;
            }
        }
    }

    while (t--) {
        cin >> n;
        cout << primes[n - 1] << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main(){

    int t,n;
    cin >> t;

    while(t--){
        cin >> n;
        int i = 1;
        while(1){
            int j = 1;
            while(j <= n){
                if(i%j != 0){
                    break;
                }
                j++;
            }
            if(j == n+1){
                cout << i << endl;
                break;
            }
            i++;
        }
    }

    return 0;
}
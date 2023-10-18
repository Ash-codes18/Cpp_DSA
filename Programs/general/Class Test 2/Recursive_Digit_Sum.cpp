#include <iostream>
#include <string>
using namespace std;



int sum(int a){


int val=0;

        while(a>0){
            val+=a%10;
            a/=10;
        }

        if(val<10){
            return val;
        }
        else{
            return sum(val);
        }
    

}


int main(){

    string n;
    int k;
    cin >> n >> k;

   for (int i = 0; i < k; i++) {
    if (n.size() > std::numeric_limits<int>::digits10) {
        cout << "Resulting number too large to be represented as an integer." << endl;
        return 1; // Exit with an error code
    }
    n += n;
}
cout << sum(stoi(n));




    return 0;
}
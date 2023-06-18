#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int ans = 0;
    int p = 1;
    while (n != 0) {
        int last_bit = n & 1;
        ans += p * last_bit;
        p = p * 10;
        n = n >> 1;
    }
    
    cout << ans << endl;
    return 0;
}

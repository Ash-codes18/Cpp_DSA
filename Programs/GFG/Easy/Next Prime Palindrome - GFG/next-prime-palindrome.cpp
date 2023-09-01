//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
	public:
	

	bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}

int PrimePalindrome(int N) {
    if (N <= 2) {
        return 2;
    }

    N = (N % 2 == 0) ? N + 1 : N; // Ensure N is odd

    while (true) {
        if (isPalindrome(N) && isPrime(N)) {
            return N;
        }
        N += 2; // Increment by 2 to check only odd numbers
    }
}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.PrimePalindrome(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
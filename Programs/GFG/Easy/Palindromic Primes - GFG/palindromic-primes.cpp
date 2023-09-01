//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
  
 bool prime(int n){
      
    if(n<2){
        return false; 
    }
    
    if(n<=3){
        return true;
    }
    
    if(n%2==0 || n%3==0){
        return false;
    }
    
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
  }
  
bool pal(int n){
      
          int a=0;
          int z=n;
          while(z>0){
              int p=z%10;
              a=(a*10)+p;
              z=z/10;
          }
          if(a==n){
              return true;
          }
          
      return false;
      
  }
  
  
    int palPrimes(int n) {
        // code here
        
        int count=0;
        if(n==2){
            count++;
        }
        
        int i=2;
        while(i<n){
            if(prime(i) && pal(i)){
                count++;
            }
            i++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.palPrimes(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
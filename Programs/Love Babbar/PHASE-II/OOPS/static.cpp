// We can directly access a static member of a class without having the need to create an instance of that class (object)


// static members need to be initialized outside

#include <iostream>
using namespace std;


class me{
public:
    static string name;
    static int age;
    string gender;
};


// :: = scope resolution operator

int me::age=19;
string me::name="Ash";

// can't be initialized since non-static
// string me::gender="male"


int main() {
    
    cout<<me::age<<endl;

    me a;
    a.age=21;
    cout<<a.age;


    return 0;
}






















class Solution {
public:
    int maxVowels(string s, int k) {
        int a = 0 , j = k;
        int ct = 0;
        //check for vowels in first k elements
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                ct++;
            }
        }
        int maxi = ct;
        //if ct is equal to k , there couldn't be greater answer than that so return 
        if(ct==k) return ct;
        //now keep moving the window of size k by increamenting j and a as a++ and j++
        while(j<s.size()){
            
            //if previous first element is vowel then decrease it's count
            if(s[a]=='a' || s[a]=='e' || s[a]=='i' || s[a]=='o' || s[a]=='u'){
                ct--;
            }
            a++;
            //if upcoming element is vowel then increase the count
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                
               ct++;
            }
            j++;
            //store the maximum count till now
            maxi = max(maxi,ct);
            
        }
        return maxi;
    }
};
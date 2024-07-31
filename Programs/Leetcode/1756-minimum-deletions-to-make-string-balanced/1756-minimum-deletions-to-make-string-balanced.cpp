//Approach -1 

// class Solution {

// public:
//     int minimumDeletions(string s) {
//         int n = s.length();
//         vector<int> a(n);
//         vector<int> b(n);

//         int count = 0;

//         for(int i =0;i<n;i++){
//             b[i]=count;
//             if(s[i]=='b') count++;
//         }

//         count = 0;

//         for(int i=n-1;i>=0;i--){
//             a[i]=count;
//             if(s[i]=='a') count++;
//         }

//         count = n;

//         for(int i=0;i<n;i++) count=min(count,a[i]+b[i]);


//         return count;

//     }
// };



// Approach -2 

class Solution{
    public:
        int minimumDeletions(string s) {
        int n=s.length();
        stack<char> st;
        int c=0;
        for(int i=0;i<n;i++){
            if (!st.empty() && st.top()=='b' && s[i]=='a'){
                st.pop();
                c++;
            }
            else st.push(s[i]);
        }
        return c;
    }
};

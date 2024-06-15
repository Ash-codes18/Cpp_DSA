// Approach-1 : Using Map and Stack

// class Solution {
// public:
//     bool isValid(string s) {
       
//        map<char,int> a;
    
//         a['(']=1;
//         a['[']=2;
//         a['{']=3;
//         a[')']=-1;
//         a[']']=-2;
//         a['}']=-3;

//        int n= s.length();

//         stack<int> st;
//         int flag=1;


//         for(auto v : s){

//             int x=a[v];
//             if(x>0){
//                 st.push(x);
//             }
//             else{
//                 if( !st.empty() && st.top()+x==0){
//                 st.pop();
//             }

//               else{
//             flag = 0;
//             break;
//         }
//             }

//         }

//           if(!st.empty()){
//     flag = 0;
//   }
//   if(!flag){
//     return false;
//   }
  

// return true;

//     }
// };






// Approach-2 : Using stack only

class Solution {
public:
    bool isValid(string s) {        
       
        stack<char> st;

        for(char i : s){
            if(i=='{' || i=='(' || i=='['){
                st.push(i);
            }
            else{
                if(!st.empty()){
                    
                    if(i==')' && st.top()=='('){
                        st.pop();
                    }
                    
                    else if(i=='}' && st.top()=='{'){
                        st.pop();
                    }
                    
                    else if(i==']' && st.top()=='['){
                        st.pop();
                    }

                    else{
                        return false;
                    }

                }
                else{
                    return false;
                }
            }
        }

    return st.empty() ? true:false;

    }
};
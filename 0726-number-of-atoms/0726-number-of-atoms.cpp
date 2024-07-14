class Solution {

private:
    int get(string s){
        int num = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            num+=(pow(10,n-i-1)*(s[i]-'0'));
        }
        return num;
    }


public:
    string countOfAtoms(string f) {
        int n = f.size();
        string ans;
        map<string,int> mp;
        stack<char> st;

        for(int i=0;i<n;i++){
            if(f[i]==')'){

                if(!isdigit(st.top())){
                    st.push('1');
                }
    
                stack<char> temp;
                while(st.top()!='('){
                    temp.push(st.top());
                    st.pop();
                }
                st.pop();


                // stack<char> printer = temp;
                // cout<<endl;
                // while(!printer.empty()){
                //     cout<<printer.top();
                //     printer.pop();
                // }
                // cout<<endl;


                string mul;
                while(i+1<n && isdigit(f[i+1])){
                    mul+=f[i+1];
                    i++;
                }

                int multiply = 1;

                if(!mul.empty()){
                    multiply = get(mul);
                }
                // cout<<multiply<<endl;



                while(!temp.empty()){
                    string number;
                    if(isdigit(temp.top())){
                        while(!temp.empty() && isdigit(temp.top())){
                            number+=temp.top();
                            temp.pop();
                        }
                        if(!number.empty()){
                            int num = get(number);
                            // cout<<num<<" -> ";
                            num*=multiply;
                            // cout<<num<<endl;
                            number = to_string(num);
                            int size = number.length();
                            for(int i=0;i<size;i++){
                                st.push(number[i]);
                            }
                            // number.clear();
                            // cout<<number<<endl;
                        }
                    }
                    
                    else{
                        st.push(temp.top());
                        temp.pop();
                    }
                    // stack<char> print = st;
                    // while(!print.empty()){
                    //     cout<<print.top();
                    //     print.pop();
                    // }
                    // cout<<endl;
                }

            }


            else{
                if(!st.empty() && isalpha(st.top()) && (isupper(f[i]) || f[i]=='(')){
                    st.push('1');
                }
                st.push(f[i]);
                // stack<char> print = st;
                // while(!print.empty()){
                //     cout<<print.top();
                //     print.pop();
                // }
                // cout<<endl;
            }
        }


    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    cout<<ans;

    for(char i : ans) st.push(i);

    
    string temp;
    while(!st.empty()){
        if(isalpha(st.top())){
            temp+=st.top();
            st.pop();
        }
        else{
            string n;
            while(!st.empty() && isdigit(st.top())){
                n+=st.top();
                st.pop();
            }
            mp[temp]+=get(n);
            temp.clear();
        } 
    }

    if(!temp.empty()) mp[temp]++;

    ans.clear();

    for(auto i : mp){
        ans+=i.first;
        if(i.second>1) ans+=to_string(i.second);
    }


return ans;

    }
};
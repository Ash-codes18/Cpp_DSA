class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0";
        
        int n = num1.length();
        int m = num2.length();
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        vector<string> v(n>m?n:m);
        

        for(int i=0;i<v.size();i++){
            string temp = "";
            for(int j=0;j<i;j++){
                temp.push_back('0');
            }
            v[i]=temp;
        }

        int s = 0;

        for(int i=0;i<n;i++){
            string temp = "";
            int a = num1[i]-'0';
            int val,carry = 0;

            for(int j=0;j<m;j++){
                int b = (num2[j]-'0')*a;
                b+=carry;
                val = b%10;
                carry = b/10;
                temp.push_back(val+'0');    
            }
            if(carry) temp.push_back(carry+'0');
            v[i]+=temp;
            int size = v[i].length();
            s=max(s,size);
        }

        string ans = "";
        
        int carry = 0;

        for(int i=0;i<s;i++){
            int num = 0;
            for(int j=0;j<v.size();j++){
                if(i<v[j].length()){
                    num+=v[j][i]-'0';
                }
            }
            num+=carry;
            carry = num/10;
            num%=10;
            ans+=to_string(num);
        }
        if(carry){
            ans.push_back(carry+'0');
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
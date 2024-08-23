class Solution {
private:
    int getnum(string &s){
        int a = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            a+=pow(10,n-i-1)*(s[i]-'0');
        }
        return a;
    }

    int gcd(int a, int b){
        if(b == 0) return a;
        return gcd(b, a % b);
    }

    int getlcm(vector<int> &arr){
        int n = arr.size();
        int ans = arr[0];

        for (int i = 1; i < n; i++){
            ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));
        }
        
        return ans;
    }


public:
    string fractionAddition(string s) {

        ios::sync_with_stdio(0);
        cin.tie(0);

        int n = s.length();
        vector<int> num;
        vector<int> den;
        queue<char> op;
        string temp = "";

        for(int i=0;i<n;i++){
            if(s[i]=='/'){
                num.push_back(getnum(temp));
                temp = "";
                i++;
                while(i<n && isdigit(s[i])){
                    temp.push_back(s[i++]);
                }
                den.push_back(getnum(temp));
                temp = "";

            }
            if(isdigit(s[i])){
                temp.push_back(s[i]);
            }
            else{
                if(i!=0)
                op.push(s[i]);
            }
        }

        if(s[0]=='-'){
            num[0]=-num[0];
        }

        int lcm = getlcm(den);

        for(int i=0;i<num.size();i++){
            num[i]*=(lcm/den[i]);
        }  
        
        int nums = num[0];

        for(int i = 1;i<num.size();i++){
            char sign = op.front();
            op.pop();
            if(sign == '+'){
                nums+=num[i];
            }
            else nums-=num[i];
        }

        int hcf = abs(gcd(nums,lcm));

        while(lcm>1 && abs(nums)>1 && hcf>1){
            if(lcm%hcf==0 && nums%hcf==0){
                lcm/=hcf;
                nums/=hcf;
            }
            else break;
        }

        string ans = "";
        ans+=to_string(nums)+"/";
        if(nums==0){
            ans+="1";
        }
        else ans+=to_string(lcm);


        return ans;
    }
};
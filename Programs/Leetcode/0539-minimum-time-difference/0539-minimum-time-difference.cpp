class Solution {

private:
    int geth(string s){
        int a = (s[0]-'0')*10;
        a+= s[1]-'0';
        return a;
    }

    int getm(string s){
        int a = (s[3]-'0')*10;
        a+= s[4]-'0';
        return a;
    }


public:
    int findMinDifference(vector<string>& arr) {
        int n  = arr.size();
        sort(arr.begin(),arr.end());     

        int ans = INT_MAX;

        for(int i=1;i<=n;i++){
            ios::sync_with_stdio(0);
            cin.tie(0);

            int h1 = geth(arr[(i-1)%n])*60;
            int h2 = geth(arr[i%n])*60;
            int m1 = getm(arr[(i-1)%n]);
            int m2 = getm(arr[i%n]);

            int t1 = h1+m1;
            int t2 = h2+m2;

            int diff = abs(t2-t1);

            if(diff>720) diff = 1440-diff;
            
            ans = min(ans,diff);
        }


        return ans;
    }
};
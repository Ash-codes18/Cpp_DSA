class Solution {
private:
    bool sub(string &a, string &b) {
        int n = a.size();
        int m = b.size();
        
        if(m<n) return false;  

        return b.compare(0,n,a)==0 && b[n]=='/';
    }

public:
    vector<string> removeSubfolders(vector<string>& arr){
        sort(arr.begin(), arr.end());
        ios::sync_with_stdio(0);
        cin.tie(0);
        vector<string> ans;
    
        for(string &i : arr){
            if(ans.empty() || !sub(ans.back(), i)){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};

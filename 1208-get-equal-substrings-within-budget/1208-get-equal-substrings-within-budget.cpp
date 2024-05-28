class Solution {


private:
    int maxsubarray(vector<int> arr, int cost){
        int len = 0;
        int n = arr.size();


        for(int i = 0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                if(sum<=cost){
                    len = max(len,j-i+1);
                }
                else{
                    break;
                }
            }
        }

return len;

    }


public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.length();
        vector<int> diff(n,0);

        for(int i =0;i<n;i++){
            diff[i]=abs(t[i]-s[i]);
        }

//         for(int i : diff){
//             cout<<i<<" ";
//         }

//         cout<<endl<<endl;

        return maxsubarray(diff,maxCost);
// return 0;

    }
};
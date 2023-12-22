//Approach -1  = O(n^2) -> Bruteforce, Giving TLE after 34 T.C.

/*
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int min=INT_MAX;
        vector<vector<int>> ans;
        vector<int> temp;

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(arr[i]-arr[j])<min){
                    min=abs(arr[i]-arr[j]);
                }
            }
        }


        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(arr[i]-arr[j])==min){
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    ans.push_back(temp);
                    temp.clear();
                }
            }
        }



        // cout<<endl<<min;

return ans;
    }
};
*/


//Approach -2

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int min=INT_MAX;
        vector<vector<int>> ans;
        vector<int> temp;


        for(int i=0;i<n-1;i++){
            if(abs(arr[i+1]-arr[i])<min){
                min=abs(arr[i+1]-arr[i]);
            }
        }



        for(int i=0;i<n-1;i++){
            if(abs(arr[i+1]-arr[i])==min){
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                ans.push_back(temp);
                temp.clear();
            }
        }



        // for(int i:arr){
        //     cout<<i<<" ";
        // }

        // cout<<min;

return ans;
    }
};

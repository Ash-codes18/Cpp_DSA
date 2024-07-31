#include <iostream>
#include <vector>
using namespace std;


void subset(vector<int> nums, vector<int> output, int ind, vector<vector<int>>& ans) {
    if (ind >= nums.size()) {
        ans.push_back(output);
        return;
    }
    subset(nums, output, ind + 1, ans);
    output.push_back(nums[ind]);
    subset(nums, output, ind + 1, ans);
}


int main() {

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    vector<int> arr;
    int ind=0,x;
    vector<int> output;
    vector<vector<int>> ans;

    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }


    subset(arr,output,ind,ans);

    cout<<"The Subsets are : ";

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
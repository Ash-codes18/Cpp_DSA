#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Insert function here
 int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n=nums.size();

        for(int i=0;i<n-1;i++){
            if((nums[i+1]-nums[i])!=1){
                return (nums[i]+1);
            }
        }
        
        if(nums[0]==1){
            return 0;
        }

        return nums[n-1]+1;
    }



int main()
{
    vector<int> v{9,6,4,2,3,5,7,0,1};
    cout<<missingNumber(v);

    // for(int i:v){
    //     cout<<i<<" ";
    // }


    return 0;
}

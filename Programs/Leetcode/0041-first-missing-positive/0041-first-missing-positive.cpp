// Using extra space

// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n = nums.size();

//         int gt = INT_MIN;

//         for(int i : nums){
//             gt = max(gt,i);
//         }

//         map<int,bool> mp;

//         for(int i : nums){
//             mp[i]=true;
//         }

//         for(int i=1;i<gt;i++){
//             if(!mp[i]){
//                 return i;
//             }
//         }
        

//         return gt<0? 1:gt+1;
//     }
// };


// without using extra space -> kinda like self hashing
// See test case 2 for better understanding

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for(int i =0;i<n;i++){
            if(nums[i]<0){
                nums[i]=0;
            }
        }


        for(int i : nums){
            cout<<i<<" ";
        }

        cout<<endl;

        for(int a : nums){
            a=abs(a);
            if(a<=n && a>0){
                if(nums[a-1]>0){
                    nums[a-1]*=-1;
                }
                else if(nums[a-1]==0){
                    nums[a-1]=-a;
                }
            }
        }

         for(int i=0;i<n;i++){
            if(nums[i]>=0){
                return i+1;
            }
        }

        return n+1;

    }
};

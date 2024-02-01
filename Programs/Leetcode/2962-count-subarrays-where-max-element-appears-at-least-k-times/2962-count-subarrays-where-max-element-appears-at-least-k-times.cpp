//Approach-1 -> Memory Limit exceeded

/*
class Solution {

private:

void subset(vector<int> nums, vector<int> output, vector<vector<int>>& ans) {

    int n=nums.size();

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            output.push_back(nums[j]);
            ans.push_back(output);
        }
        output.clear();
    }

}
    

int getmax(vector<int>& nums) {
    if(nums.empty()){
        return INT_MIN;
    }
    int max=nums[0];
    for(int i=1;i<nums.size();i++) {
        if(nums[i]>max){
            max=nums[i];
        }
    }
    return max;
}


int occurences(vector<vector<int>> ans,int max,int k){
    int n=ans.size();
    int count=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<ans[i].size();j++){
            if(ans[i][j]==max){
                cnt++;
            }
        }
        if(cnt>=k){
            count++;
        }
    }
    return count;
}


public:
    long long countSubarrays(vector<int>& nums, int k) {
        
    vector<int> output;
    vector<vector<int>> ans;

    int max=getmax(nums);
    subset(nums,output,ans);
    int count=occurences(ans,max,k);

return count;
    }
};

*/


// Approach-2 -> Same but without storing (using 1 more for loop) -> TLE


/*
class Solution {

public:

int getmax(vector<int>& nums) {
    if(nums.empty()){
        return INT_MIN;
    }
    int max=nums[0];
    for(int i=1;i<nums.size();i++) {
        if(nums[i]>max){
            max=nums[i];
        }
    }
    return max;
}


    long long countSubarrays(vector<int>& nums, int k) {
        int max=getmax(nums);



    int n=nums.size();
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        int cnt=0;
            for(int z=i;z<=j;z++){
                if(nums[z]==max){
                    cnt++;
                }
            }
        if(cnt>=k){
            count++;
        }
        }
    }

return count;

    }
};
*/



//Approach-3 -> TLE for 10 test cases

/*
class Solution {

public:

int getmax(vector<int>& nums) {
    if(nums.empty()){
        return INT_MIN;
    }
    int max=nums[0];
    for(int i=1;i<nums.size();i++) {
        if(nums[i]>max){
            max=nums[i];
        }
    }
    return max;
}


    long long countSubarrays(vector<int>& nums, int k) {
        int max=getmax(nums);



        int n=nums.size();
        int count=0;


    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=i;j<n;j++){
            if(nums[j]==max){
                cnt++;
            }
            if(cnt>=k){
                count++;
            }
        }
    }






return count;

    }
};

*/



//Approach-4


class Solution {

public:

int getmax(vector<int>& nums) {
    if(nums.empty()){
        return INT_MIN;
    }
    int max=nums[0];
    for(int i=1;i<nums.size();i++) {
        if(nums[i]>max){
            max=nums[i];
        }
    }
    return max;
}


    long long countSubarrays(vector<int>& nums, int k) {
        int max=getmax(nums);
        vector<int> vals;
        int n=nums.size();
        long long count=0;


    for(int i=0;i<n;i++){
        if(nums[i]==max){
            vals.push_back(i+1);
        }
        if(vals.size()>=k){
            count+=vals[vals.size()-k];
        }
    }






return count;

    }
};

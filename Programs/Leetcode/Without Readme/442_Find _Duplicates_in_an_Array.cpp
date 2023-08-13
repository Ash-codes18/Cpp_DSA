class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

//sorting the array 
        int n=nums.size();

for(int i=0;i+1<n;i++){
    for(int j=0;j<n-i-1;j++){
    if(nums[i]>nums[i+1]){
        int temp=nums[i];
        nums[i]=nums[i+1];
        nums[i+1]=temp;
    }
    }
}


//Checking the duplicate elements in the sorted array
       int arr[100];
       int id=0;
       for(int i=0;i<n;i++){
           for(int j=i+1;j<){
           if(num[i]==nums[j]){
               arr[id]=nums[i];
               id++
           }
       } 
    }
    }
};
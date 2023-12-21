class Solution {
public:

    
    int getminval(vector<int> nums, int n){
           
        int min=INT_MAX;
        
        for(int i=0;i<n;i++){
            if(nums[i]<min && nums[i]>0){
                min=nums[i];
            }
        }
        // cout<<"Min = "<<min<<endl;
        
        return min;
        
    }
    
    
    int getsum(vector<int> nums, int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        // cout<<"Sum = "<<sum<<endl;
        return sum;
    }
    
    
    void subtract(vector<int>& nums, int n, int val){
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[i]-=val;
            }
        }
    }
    
    
    int minimumOperations(vector<int>& nums) {
       
        int count =0;
        int n=nums.size();
        int min;

        while(getsum(nums,n)>0){
            min=getminval(nums,n);
            subtract(nums,n,min);
            count++;
        }
        
       return count;     
    }
};
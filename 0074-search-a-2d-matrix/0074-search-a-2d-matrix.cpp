class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        int start=0;
        int end=(row*col)-1;
        int mid;
        
        
        while(start<=end){
            
            mid=start-(start-end)/2;
            
            int ecol=mid%col;
            int erow=mid/col;
            
            
            if(matrix[erow][ecol]==target){
                return true;
            }
            
            else if(matrix[erow][ecol]>target){
                end=mid-1;
            }
            
            else{
                start=mid+1;
            }      
            
        }
        
        return false;
        
    }
};
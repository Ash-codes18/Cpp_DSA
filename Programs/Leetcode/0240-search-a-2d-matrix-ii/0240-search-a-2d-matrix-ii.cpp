class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        
        int start=0;
        int end=col-1;
        int mid;
        int rowtracker=0;
        
        
    while(rowtracker<row){
        
        while(start<=end){
            
            
            mid=(start+end)/2;
            
            if(matrix[rowtracker][mid]==target){
                return true;
            }
            
            else if(matrix[rowtracker][mid]>target){
                end=mid-1;
            }
            
            else{
                start=mid+1;
            }
            
            
        }
        start=0;
        end=col-1;
        rowtracker++;
        
    }
        
        return false;
        
    }
};
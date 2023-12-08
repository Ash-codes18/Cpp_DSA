class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        
        int rind=0;
        int cind=col-1;
        int mid;
        
        
        
        while(rind<row && cind>=0){
            
            
            if(matrix[rind][cind]==target){
                return true;
            }
            
            else if(matrix[rind][cind]<target){
                rind++;
            }
            
            else{
                cind--;
            }
            
            
        }
        
        
        
        return false;
        
    }
};
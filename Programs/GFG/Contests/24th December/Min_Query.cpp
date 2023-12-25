//Approach-1 : TLE 

class Solution {
  public:
    vector<int> minQuery(int N, int Q, vector<int> &A, vector<vector<int>> &Queries) {
        // code here
        
        int s1,e1,s2,e2;
        int temp1,temp2;
        vector<int> result;
        
        for(int i=0;i<Q;i++){
            s1=Queries[i][0]-1;
            e1=Queries[i][1];
            s2=Queries[i][2]-1;
            e2=Queries[i][3];
            
            
            temp1=A[s1];
            for(int j=s1+1;j<e1;j++){
                temp1=A[j]&temp1;
            }
            
            
            temp2=A[s2];
            for(int j=s2+1;j<e2;j++){
                temp2=A[j]&temp2;
            }       
            
            result.push_back(temp1|temp2);
            
        }
        
        return result;
        
    }
};



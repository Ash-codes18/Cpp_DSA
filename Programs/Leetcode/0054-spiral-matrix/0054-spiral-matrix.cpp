class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
    vector<int> result;

    int nRows=matrix.size();
    int nCols=matrix[0].size();


    int sr=0;
    int sc=0;
    int er=nRows-1;
    int ec=nCols-1;



    int count=0;
    int mul=nRows*nCols;

    while(count<mul){


//starting Row

    for(int i=sc;i<=ec;i++){
        if(count<mul){
            result.push_back(matrix[sr][i]);
            count++;
        }
    }
sr++;



//Ending Col

    for(int i=sr;i<=er;i++){
        if(count<mul){
            result.push_back(matrix[i][ec]);
            count++;
        }
    }
ec--;   



//Ending Row

    for(int i=ec;i>=sc;i--){
        if(count<mul){
            result.push_back(matrix[er][i]);
            count++;
        }
    }
er--;



//starting col

    for(int i=er;i>=sr;i--){
        if(count<mul){
            result.push_back(matrix[i][sc]);
            count++;
        }
    }
sc++;

    }

    return result;

    }
};
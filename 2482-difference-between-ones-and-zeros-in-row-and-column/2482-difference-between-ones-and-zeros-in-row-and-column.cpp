//Approach-1 : O(N^3) -> TLE after 71 TC's

/*
class Solution {
public:

int rowsum(vector<vector<int>>& grid,int row,int rowsize){
    int sum=0;

    for(int i=0;i<rowsize;i++){
        sum+=grid[row][i];
    }

    return sum;
}


int colsum(vector<vector<int>>& grid,int col, int colsize){
    int sum=0;

    for(int i=0;i<colsize;i++){
        sum+=grid[i][col];
    }

    return sum;
}

    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();

        vector<vector<int>> diff;
        vector<int> temp;


        int onesrow,onescol,zerosrow,zeroscol;
        int current;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                onesrow=rowsum(grid,i,cols);
                zerosrow=abs(onesrow-cols);
                onescol=colsum(grid,j,rows);
                zeroscol=abs(onescol-rows);

                current=(onesrow+onescol)-(zerosrow+zeroscol);

                temp.push_back(current);

            }

        diff.push_back(temp);
        temp.clear();

        }
return diff;

    }
};
*/


//Approach-2

class Solution {
public:

    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();

        vector<vector<int>> diff;
        vector<int> temp;
        vector<int> colsum;
        vector<int> rowsum;
        int sum=0;


        int onesrow,onescol,zerosrow,zeroscol;
        int current;

//Calculating sum of all rows
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                sum+=grid[i][j];
            }
            rowsum.push_back(sum);
            sum=0;
        }

//Calculating sum of all cols
        for(int i=0;i<cols;i++){
            for(int j=0;j<rows;j++){
                sum+=grid[j][i];
            }
            colsum.push_back(sum);
            sum=0;
        }



        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                onesrow=rowsum[i];
                zerosrow=rows-rowsum[i];
                onescol=colsum[j];
                zeroscol=cols-colsum[j];

                current=(onesrow+onescol)-(zerosrow+zeroscol);

                temp.push_back(current);

            }

        diff.push_back(temp);
        temp.clear();


        }



return diff;

    }
};

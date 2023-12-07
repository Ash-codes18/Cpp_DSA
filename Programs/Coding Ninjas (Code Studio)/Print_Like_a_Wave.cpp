#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    
    vector<int> result;

    int count=0;
    int cind=0;

    while(count!=nRows*mCols){


        if(cind%2==0){
            for(int i=0;i<nRows;i++){
                result.push_back(arr[i][cind]);
                count++;
            }
            cind++;
        }
        else{
            for(int i=nRows-1;i>=0;i--){
                result.push_back(arr[i][cind]);
                count++;
            }
            cind++;
        }
    }
    

return result;

}
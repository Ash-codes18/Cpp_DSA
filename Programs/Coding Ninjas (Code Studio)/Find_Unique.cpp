//Initial approach

int findUnique(int *arr, int size)
{

    for(int i=0;i<size;i++){
      int flag=0;
        for(int j=0;j<size;j++){
            if(j!=i){
              if (arr[i] == arr[j]) {
                flag=1;
                break;
              }
            }
        }
        if(!flag){
          return arr[i];
        }
    }
}

//Optimized approach

int findUnique(int *arr, int size)
{

    int ans=0;
    for(int i=0;i<size;i++){
      ans=ans^arr[i];
    }
    return ans;
}
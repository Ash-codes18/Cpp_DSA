void merge(vector<int> &arr, int s, int e){

    int mid=(s+e)/2;

    int ind1=mid-s+1;
    int ind2=e-mid;
    int main=s;

    int *left = new int[ind1];
    int *right = new int[ind2];

    for(int i=0;i<ind1;i++){
        left[i]=arr[main++];
    }
    for(int i=0;i<ind2;i++){
        right[i]=arr[main++];
    }


    int leftind=0;
    int rightind=0;
    main=s;

    while(leftind<ind1 && rightind<ind2){
        if(left[leftind]<=      right[rightind]){
            arr[main++]=left[leftind++];
        }
        else{
            arr[main++]=right[rightind++];
        }
    }

    while(leftind<ind1){
        arr[main++]=left[leftind++];
    }
    
    while(rightind<ind2){
        arr[main++]=right[rightind++];
    }

    delete []left;
    delete []right;

}

void msort(vector<int> &arr, int s, int e){

    if(s>=e){
        return;
    }
    
    int mid=(s+e)/2;

    msort(arr,s,mid);
    msort(arr,mid+1,e);

    merge(arr,s,e);

}

void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    msort(arr,0,n-1);


}
class Solution {
public:

int count=0;

void merge(int arr[], int s, int e  ){

    int total=0;

    int mid=(s+e)/2;

    int lsize=mid-s+1;
    int rsize=e-mid;
    int main=s;

    int *left = new int[lsize];
    int *right = new int[rsize];


    for(int i=0;i<lsize;i++){
        left[i]=arr[main++];
    }
    for(int i=0;i<rsize;i++){
        right[i]=arr[main++];
    }


//main part 

    int p=s;
    int q=mid+1;

    while(p<=mid){
        while(q<=e && arr[p]>(1LL)*2*arr[q]){
            q++;
        }
        total+=(q-(mid+1));
        p++;
    }



//merging 

    int lind=0;
    int rind=0;
    main=s;

    while(lind<lsize && rind<rsize){
        if(left[lind]<=right[rind]){
            arr[main++]=left[lind++];
        }
        else{
            arr[main++]=right[rind++];
        }
    }

    while(lind<lsize){
        arr[main++]=left[lind++];
    }

    while(rind<rsize){
        arr[main++]=right[rind++];
    }


    delete []left;
    delete []right;

    count+=total;

}



void msort(int arr[], int start, int end){
    
    if(start>=end){
        return;
    }

    int mid = (start+end)/2;

    msort(arr,start,mid);
    msort(arr,mid+1,end);

    merge(arr,start,end);
}

    int reversePairs(vector<int>& nums) {
        
        int e=nums.size();
        int arr[e];

        int ind=0;

        for(int i : nums){
            arr[ind++]=i;
        }

        msort(arr,0,e-1);
        

        return count;
    }
};
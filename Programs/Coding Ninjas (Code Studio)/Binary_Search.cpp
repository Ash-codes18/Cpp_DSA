//partially accepted maybe TLE due to recursion

int BinSearch(vector<int> arr, int start, int end, int key){

    if(start>end){
        return -1;
    }

    int mid = start + (end - start) / 2;


    if(arr[mid]==key){
        return mid;  
    }

    else if(arr[mid]>key){
        return BinSearch(arr,start,mid-1,key);
    }

    else{
        return BinSearch(arr,mid+1,end,key);
    }

}

int search(vector<int> &nums, int target) {
    // Write your code here.
    int ans= BinSearch(nums,0,nums.size()-1,target);
    return ans;
}
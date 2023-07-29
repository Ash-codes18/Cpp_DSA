// In O(N) time complexity : 

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
return -1;
}


//In O(Log N) time complexity : 

int search(vector<int>& arr, int n, int k)
{
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == k) {
            return mid;
        }

        // If the left half is sorted
        if (arr[start] <= arr[mid]) {
            if (k >= arr[start] && k < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } 
        else { // If the right half is sorted
            if (k > arr[mid] && k <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

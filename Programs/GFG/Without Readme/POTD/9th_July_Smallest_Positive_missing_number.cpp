class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        
        bool present[n + 1] = {false};

        for(int i = 0; i < n; i++) {
            if(arr[i] > 0 && arr[i] <= n) {
                present[arr[i]] = true;
            }
        }

        for(int i = 1; i <= n + 1; i++) {
            if(!present[i]) {
                return i;
            }
        }

    return -1;
        
    } 
};
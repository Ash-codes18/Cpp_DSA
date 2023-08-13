class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int n = sizeof(arr) / 4;
        int counter[1000] = {0};

        for(int i = 0; i < n; i++) {

            if(i > 0) {

                int flag = 1;
                
                for(int j = i; j > 0; j--) {

                    if(arr[i] == arr[j]) {
                        flag = 0;
                        break;
                    }
                }

                if(flag == 1) {

                    for(int j = 0; j < n; j++) {

                        if(arr[i] == arr[j] && i != j) {
                            counter[i]++;
                        }
                    }
                }
            }
            else {
               for(int j = 0; j < n; j++) {

                    if(arr[i] == arr[j] && i != j) {
                        counter[i]++;
                    }
                } 
            }
        }

        for(int i = 0; i < n; i++) {

            if(counter[i] != 0) {

                for(int j = i; j < n; j++) {

                    if(counter[i] == counter[j] && i != j) {
                        return false;
                    }
                }
            }
        }  
        
        return true;
    }
};

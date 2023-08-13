class Solution {
public:
    int findK(int a[MAX][MAX], int n, int m, int k) {
        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = m - 1;
        int count = 0;

        while (count < n * m) {
            
            for (int i = left; i <= right; i++) {
                count++;
                if (count == k)
                    return a[top][i];
            }
            top++;

            
            for (int i = top; i <= bottom; i++) {
                count++;
                if (count == k)
                    return a[i][right];
            }
            right--;

    
            for (int i = right; i >= left; i--) {
                count++;
                if (count == k)
                    return a[bottom][i];
            }
            bottom--;

            for (int i = bottom; i >= top; i--) {
                count++;
                if (count == k)
                    return a[i][left];
            }
            left++;
        }

        return -1; 
    }
};

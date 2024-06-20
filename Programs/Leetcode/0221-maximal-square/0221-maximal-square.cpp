class Solution {

private:

 int histogram(vector<int>& heights) {
        
        int n = heights.size();
        stack<int> s;
        vector<int> prev(n,-1);
        stack<int> st;
        vector<int> next(n,n);
        int ans = 0;

//Storing the index of the next smaller element
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(!s.empty()){
                next[i] = s.top();
            }
            s.push(i);
        }  

//Storing the index of the prev smaller element
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(!st.empty()){
                prev[i] = st.top();
            }
            st.push(i);
        }

//Finding the width of the current bar by getting the diff of prev smaller and next smaller -1
        for(int i=0;i<n;i++){
            int val = next[i]-prev[i]-1;
            if(val!=heights[i]){
                val = min(val,heights[i]);
            }
            int area = val * val;
            ans = max(ans,area);
        }



    return ans;

    }

public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> arr(m);
        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]-'0'==0){
                    arr[j]=0;
                }
                else{
                    arr[j]+=matrix[i][j]-'0';
                }

            }

            int val = histogram(arr);
            ans = max(ans,val);
        }

    return ans;


    }
};
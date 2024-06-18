class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
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

//Finding the widht of the current bar by getting the diff of prev smaller and next smaller -1
        for(int i=0;i<n;i++){
            int val = next[i]-prev[i]-1;
            int area = heights[i] * val;
            ans = max(ans,area);
        }



    return ans;

    }
};
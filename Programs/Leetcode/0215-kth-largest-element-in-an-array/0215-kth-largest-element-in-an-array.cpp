class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i : nums) pq.push(i);
        int count = 0;
        while(count<k-1){
            pq.pop();
            count++;
        }
        return pq.top();
    }
};
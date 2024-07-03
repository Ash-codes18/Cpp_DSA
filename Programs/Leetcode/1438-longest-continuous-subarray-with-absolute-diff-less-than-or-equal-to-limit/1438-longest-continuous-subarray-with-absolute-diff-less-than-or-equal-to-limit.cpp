class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        int i = 0, j = 0, len = 1;
        deque<int> minq;
        deque<int> maxq;


        for(int i=0;i<n;i++){

            while(!minq.empty() && minq.back()>nums[i]){
                minq.pop_back();
            }

            while(!maxq.empty() && maxq.back()<nums[i]){
                maxq.pop_back();
            }

            minq.push_back(nums[i]);
            maxq.push_back(nums[i]);

            while(maxq.front()-minq.front()>limit){
                if(nums[j]==maxq.front()){
                    maxq.pop_front();
                }
                if(nums[j]==minq.front()){
                    minq.pop_front();
                }
                j++;
            }

            len=max(len,i-j+1);

        }



    return len;

    }
};
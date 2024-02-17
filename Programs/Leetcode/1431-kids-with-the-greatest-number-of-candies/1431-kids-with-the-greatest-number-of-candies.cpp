class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max=candies[0];

        for(int i:candies){
            if(i>max){
                max=i;
            }
        }

        for(int i : candies){
            if(i+extraCandies>=max){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }

return ans;

    }
};
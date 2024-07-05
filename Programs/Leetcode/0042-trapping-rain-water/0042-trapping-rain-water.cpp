class Solution {
public:
    int trap(vector<int>& height) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);     

        int l = 0, r = height.size()-1, ans = 0, level = 0;

        while(l<r){
            int smaller = height[(height[l]>height[r])? r-- : l++];
            level = max(smaller,level);
            ans+=(level-smaller);
        }

return ans;

    }
};
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        sort(deck.begin(),deck.end());
        deque<int> ans;

        int i=n-1;

        while(i>=0){
            int s = ans.size();
            if(s>1){
                for(int j=s-1;j>0;j--){
                    swap(ans[j-1],ans[j]);
                }
            }
            ans.push_front(deck[i]);
            i--;
        }
        

        vector<int> result;

        for(int i:ans){
            result.push_back(i);
        }


        return result;
    }
};
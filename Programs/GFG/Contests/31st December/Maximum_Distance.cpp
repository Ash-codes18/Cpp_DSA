class Solution {
public:
int solve(int N, int a, vector<int> x) {
       sort(x.begin(),x.end());
       vector<int> dif;
       for(int y : x){
           dif.push_back(abs(y-a));
       }
       sort(dif.rbegin(),dif.rend());
       return dif[0]+dif[1];
    }
};
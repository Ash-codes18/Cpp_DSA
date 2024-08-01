class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> left;
        vector<int> right;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i==i) left.push_back(i);
                else{
                    left.push_back(i);
                    right.push_back(n/i);
                }
            }
        }


        int p = left.size();
        int q = right.size();
        int s = p+q;

        if(s<k) return -1;

        if(k<=p){
            return left[k-1];
        }
        else{
            return right[s-k];
        }

    }
};
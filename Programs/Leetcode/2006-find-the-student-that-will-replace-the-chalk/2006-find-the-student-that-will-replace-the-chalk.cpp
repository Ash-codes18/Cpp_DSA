class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        vector<long long> psum(n);
        psum[0] = chalk[0];
        for(int i=1;i<n;i++){
            psum[i]=psum[i-1]+chalk[i];
        }

        k%=psum[n-1];

        for(int i=0;i<n;i++){
            if(chalk[i]>k) return i;
            k-=chalk[i];
        }

        return n-1;
    }
};
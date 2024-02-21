class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double k=celsius+273.15;
        double fh=(celsius*1.80)+32.00;

        vector<double> ans={k,fh};
        return ans;
    }
};
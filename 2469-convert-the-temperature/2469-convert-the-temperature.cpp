class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double k,f;
        vector<double>ans;
        k=celsius+273.15;
        f=(celsius*1.80)+32.00;
        ans.push_back(k);
        ans.push_back(f);
        return ans;
    }
};
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=INT_MAX;
        int max=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>max)
                max=nums[i];
        }
         for(int i=0;i<n;i++){
            if(nums[i]<min)
                min=nums[i];
        }
        int g;
        g=gcd(min,max);
        return g;
    }
};
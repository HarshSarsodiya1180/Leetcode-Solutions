class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>mp;
        int count=0;
        for(auto j:stones){
             mp[j]++;}
        for(auto i:jewels){
            if(mp[i]>0)
                count+=mp[i];
            }
        return count;
    }
};
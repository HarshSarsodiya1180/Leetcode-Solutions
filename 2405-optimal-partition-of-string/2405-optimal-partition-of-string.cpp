class Solution {
public:
    int partitionString(string s) {
        int n=s.size();
        int ans=1;
        set<char>se;
        for(auto c:s){
            if(se.find(c)!=se.end()){
                se.clear();
                ans++;
            }
            se.insert(c);
        }
        return ans;
    }
};
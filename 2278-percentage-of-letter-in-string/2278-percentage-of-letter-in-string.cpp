class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]==letter){
                cnt++;}
        }
        
        return 100*cnt/n;
    }
};
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        string str;
        int k=0,l=0;
        for(int i=0;i<(n+m);i++){
            while(k<n ||l<m){
                if(k<n){
                    str.push_back(word1[k]);
                    k++;
                }
                if(l<m){
                    str.push_back(word2[l]);
                    l++;
                }
            }
        }
        return str;
    }
};
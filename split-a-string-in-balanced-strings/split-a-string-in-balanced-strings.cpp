class Solution {
public:
    int balancedStringSplit(string s) {
        
        int countR=0, countL=0, ans=0;
        for(int i =0 ;i<s.size(); i++){
            if(s[i]=='R')
                ++countR;
            if(s[i]=='L')
                ++countL;
            if(countR==countL){
                ++ans;
                countR=countL=0;
            }
        }
        return ans;
        
    }
};
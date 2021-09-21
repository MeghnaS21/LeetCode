class Solution {
public:
    bool isPalindrome(int x) {
        
        stringstream ss;
        ss<<x;
        
        string s;
        ss>>s;
        
        string rs;
        
        for(int i =0 ; i<s.size() ; i++){
            rs = s[i] + rs;
        }
        
        if(s==rs)
            return true;
        else
            return false;
        
    }
};
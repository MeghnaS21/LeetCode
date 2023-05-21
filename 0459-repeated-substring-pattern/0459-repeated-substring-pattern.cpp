class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t=s+s; //adding the same string twice in a different string t
        if(t.substr(1,t.size()-2).find(s)!=-1) //checking the subsstring
            return true;
        return false;
    }
};
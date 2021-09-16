class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string s1=s;
        int l = s.length();
        for (int i = 0; i < l; i++) {
            s1[indices[i]] = s[i];
        }
        return s1;
        
    }
};
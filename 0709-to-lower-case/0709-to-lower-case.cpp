class Solution {
public:
    string toLowerCase(string s) {
       int sizeOfString = s.size();
        //logic:
        //small letters ranges from 97 to 122
        //captial letters ranges from 65 to 90
        // subtract 32 to convert to capital and vice - versa
        
        for(int i = 0; i<sizeOfString ; i++){
            if((int)s[i] <= 90 && (int)s[i] >= 65 )
                s[i] = (char)(((int)s[i]) + 32);
        }
        return s;
    }
};
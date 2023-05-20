class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        
        if (m == 0) return 0; // empty needle
        
        for (int i = 0; i <= n - m; i++) {
            bool found = true;
            for (int j = 0; j < m; j++) {
                if (haystack[i+j] != needle[j]) {
                    found = false;
                    break;
                }
            }
            if (found) return i;
        }
        return -1; // needle not found
    }
};
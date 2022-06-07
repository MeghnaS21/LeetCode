class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> pascal(n);

        for (int i = 0; i < n; i++) {
            pascal[i].resize(i + 1);
            pascal[i][0] = pascal[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
        return pascal;
        
    }
};
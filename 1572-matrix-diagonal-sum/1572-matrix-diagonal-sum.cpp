class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        
        // mid point index
        int mid = n / 2;
        
        // summation of diagonal element
        int summation = 0;
        
        for( int i = 0 ; i < n ; i++ ){
            
            // primary diagonal
            summation += mat[i][i];
            
            // secondary diagonal
            summation += mat[n-1-i][i];
        }
        
        
        if( n % 2 == 1 ){
            
            // remove center element (repeated) on odd side-length case
            summation -= mat[mid][mid];
        }
        
        return summation;

    }
};
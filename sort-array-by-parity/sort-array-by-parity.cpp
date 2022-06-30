class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int start = 0, end = A.size()-1;

      while(start<end){
          if(A[start]%2!=0 && A[end]%2==0){
              swap(A[start],A[end]);
              start++;
              end--;
          }

          if(A[start]%2 == 0){
              start++;
          }

          if(A[end]%2 != 0){
              end--;
          }
      }

    return A;
   }
};
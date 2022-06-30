class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int first =0;
        int last = nums.size()-1;
        while(first<last){
            if(nums[first]%2!=0 && nums[last]%2==0){
                swap(nums[first], nums[last]);
                  first++;
                  last--;
            }
            if(nums[first]%2==0)
                first++;
            if(nums[last]%2!=0)
                last--;
            
        }
        return nums;
        
        /*
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
        */
    }
};
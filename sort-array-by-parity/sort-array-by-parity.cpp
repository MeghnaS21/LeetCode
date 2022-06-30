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
        
    }
};
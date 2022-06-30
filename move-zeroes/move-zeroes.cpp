class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int fast = 0, slow = 0;
        for(; fast < nums.size(); fast++){
            if(nums[fast]){
                nums[slow++] = nums[fast];
            }
        }
        
        for(; slow < nums.size(); slow++){
            nums[slow] = 0;
        }
 
    }
};
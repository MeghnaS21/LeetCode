class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
//         if(nums.size() <= 1){
//             return nums.size();
//         }

//         int i = 0;

//         for(int j = 1; j < nums.size(); j++){
//             if(nums[j] != nums[i]){
//                 i++;
//                 nums[i] = nums[j];
//             }
//         }

//         return i + 1;
        int n=nums.size();
        if(nums.size() <= 1)
            return nums.size();
        
        int i=1;
        int temp=0;
        int count=1;
        
        nums[temp]=nums[0];
        ++temp;
        while(i<n){
            if(nums[i] != nums[i-1]){
                ++count;
                nums[temp]=nums[i];
                ++temp;
                ++i;
            }
            else{
                ++i;
            }
        }
        return count;
        
    }
};
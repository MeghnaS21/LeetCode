class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int lastMax = 0, curMax = 0;
        for(int num : nums){
            if(num){
                curMax++;
            }else{
                lastMax = max(lastMax, curMax);
                curMax = 0;
            }
        }
        return max(lastMax, curMax);
   } 
};
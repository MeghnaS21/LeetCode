class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negative_count = 0;
        for(auto i:nums){
            if(i<0){
                ++negative_count;
            }
            if(i==0){
                return 0;
            }
        }
        
        if(negative_count % 2)
            return -1;
        else
            return 1;
    }
};
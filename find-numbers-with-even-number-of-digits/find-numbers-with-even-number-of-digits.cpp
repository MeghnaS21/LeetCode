class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int countEven=0;
        for(int i:nums){
            int countDigits=0;
            while(i!=0){
                i=i/10;
                ++countDigits;
            }
            if(countDigits%2==0)
            {
                ++countEven;
            }
        }
       return countEven; 
    }
};
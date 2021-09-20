class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count=0;
        for(int i = 0 ; i<jewels.size();i++){
            for(int j =0;j<stones.size();j++){
                if(stones[j]==jewels[i]){
                    ++count;
                    stones[j]='1';
                }
            }
        }
        return count;
        
    }
};
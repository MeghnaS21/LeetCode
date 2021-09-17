class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector<int> target;
        for(int i =0 ;i<index.size();i++){
            target.insert(begin(target)+index[i], nums[i]);
        }
        
        return target;
        
    }
};
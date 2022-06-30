class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected;
        expected = heights;
        sort(expected.begin(), expected.end());
        int count=0;
        for(int i=0;i<expected.size();i++)
        {
            if(expected[i]!=heights[i])
                count++;
        }
        
        return count;
    }
};
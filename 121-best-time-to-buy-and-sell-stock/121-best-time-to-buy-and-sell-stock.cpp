class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxnum = 0;
        int minnum = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
          minnum = min(minnum, prices[i]);
          maxnum = max(maxnum, prices[i] - minnum);
        }
  return maxnum;
        
    }
};
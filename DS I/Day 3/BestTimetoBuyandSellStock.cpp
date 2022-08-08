class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices.size();

  int maxProfit = 0;
  int minPrice = prices[0];
  for(int i=1; i<l; i++) {
    maxProfit = max(maxProfit, prices[i]-minPrice);
    minPrice = min(minPrice, prices[i]);
  }

  return maxProfit;
}
};
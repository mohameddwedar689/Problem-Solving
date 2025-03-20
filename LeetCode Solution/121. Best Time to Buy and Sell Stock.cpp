class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int ptr = prices[0];
            int profit = 0;
            for(int i = 0 ; i < (int)prices.size(); i++) {
                if(prices[i] <= ptr) {
                    ptr = prices[i];
                }
                else {
                    if(profit > prices[i] - ptr)
                        continue;
                    profit = prices[i] - ptr;
                }
            }
            return profit;
        }
    };
class Solution {
public:
//leetcode 121 maximum profit
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            int diff=prices[i]-mini;
            profit=max(diff,profit);
            mini=min(prices[i],mini);
        }
        return profit;
        
    }
};
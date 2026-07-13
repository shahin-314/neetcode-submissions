class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int l = 0;   // Buy Day
        int r = 1;   // Sell Day

        int profit = 0;

        while(r < prices.size())
        {
            // Profit mil raha hai
            if(prices[l] < prices[r])
            {
                profit =
                max(
                    profit,
                    prices[r] - prices[l]
                );
            }
            else
            {
                // Better buying price mil gaya
                l = r;
            }

            r++;
        }

        return profit;
    }
};

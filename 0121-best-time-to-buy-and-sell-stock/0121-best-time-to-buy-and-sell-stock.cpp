class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
    int profit=0;
    int n=prices.size();
    int min=prices[0];
    for(int i=0;i<n;i++){
        if(min>prices[i]){
        min=prices[i];
        }
        else {
        profit = max(profit, prices[i] - min);
            }

    }
    return profit;

    }
};
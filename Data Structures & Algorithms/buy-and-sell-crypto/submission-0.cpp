class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy= prices[0];
        int maxi = -1 ;
        int n = prices.size();
        for(int i=1 ;i<n ; i++){
            maxi = max(maxi,prices[i]-buy);
            buy = min(buy,prices[i]);
        }
        return (maxi==-1) ? 0 : maxi ;
    }
};

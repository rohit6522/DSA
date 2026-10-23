class Solution {
    public int maxProfit(int[] prices) {

        int n = prices.length;
        int minProfit = prices[0];
        int maxProfit = 0;
        for(int i=0;i<n;i++){
            int cost = prices[i] - minProfit;
            maxProfit=Math.max(maxProfit,cost);
            minProfit=Math.min(minProfit,prices[i]);
        }
        return maxProfit;
    }
}
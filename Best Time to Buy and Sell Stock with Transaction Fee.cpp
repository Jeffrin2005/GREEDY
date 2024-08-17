class Solution {
    public int maxProfit(int[] prices, int fee) {
        int cash = 0;
        int min = prices[0];
        for(int i: prices){
            if(i < min) min = i; // keep track of minimum
            else if(i > min + fee){ // if can make a profit, take it
                cash += i - min - fee; // add profit W/ fee
                min = i - fee; // do not incur the fee multiple times, since we incurred it for this price already
            }
        }
        return cash;
    }
}

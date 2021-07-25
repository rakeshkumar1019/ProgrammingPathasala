//time O(n)
//space O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int length=prices.size();
        if(length<=1)return 0;
        int profit=0;
        int minSoFar=prices[0];
        for(int i=1;i<length;i++){
            if(prices[i]<minSoFar) minSoFar=prices[i];
            if(prices[i]-minSoFar>profit){
                profit=prices[i]-minSoFar;
            }
        }
        return profit;
    }
};

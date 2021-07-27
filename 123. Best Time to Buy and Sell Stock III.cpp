//time O(n)
//space O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<=1)return 0;
        vector<int>leftMax(n);
        vector<int>rightMax(n);
        int minPrice=prices[0];
        int maxProfit=0;
        leftMax[0]=0;
        //left to right side profit 
        for(int i=1;i<n;i++){
            minPrice=min(minPrice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minPrice);
            leftMax[i]=maxProfit;
        }
        maxProfit=0;
        int maxPrice=prices[n-1];
        rightMax[n-1]=0;
        for(int i=n-2;i>=0;i--){
            maxPrice=max(maxPrice,prices[i]);
            maxProfit=max(maxProfit,maxPrice-prices[i]);
            rightMax[i]=maxProfit;
        }
        
        int profit=0;
        for(int i=0;i<n;i++){
            profit=max(profit,leftMax[i]+rightMax[i]);
        }
        return profit;
        
    }
};

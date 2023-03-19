class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        int n=coins.size();
        //vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,0));
        
        int dp[n+1][amount+1];
        
        for(int i=0;i<amount+1;i++)
            dp[0][i]=0;                //0 coins,any amount    -0 combinations
        
        for(int i=0;i<=n;i++)
            dp[i][0]=1;                //any no coins,amount 0  -1 combinations
        
       
        for(int i=1;i<=n;i++)//i- number of coins
        {
            for(int j=1;j<amount+1;j++)//amount values
            {
                 if(coins[i-1]<=j) //new coin value < amount
                 {
                dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];//ways for i-1 coins,same amount +//  i coins,difference amount
                
                     }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
                
            }
        }
        
        return dp[n][amount];
        
    }
};
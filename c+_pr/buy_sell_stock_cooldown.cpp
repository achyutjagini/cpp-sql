class Solution {
public:
    int solve(vector<int>& nums,vector<vector<int>>& dp, int n,int i,bool buying){
        if(i>=n)
            return 0;
        if(dp[i][buying]!=-1)
            return dp[i][buying];
        int cooldown=solve(nums,dp,n,i+1,buying);
        if (buying){
            int buy=solve(nums,dp,n,i+1,!buying)-nums[i];
            dp[i][buying]= max(buy,cooldown);
        }
        else{
            int sell =solve(nums,dp,n,i+2,!buying)+nums[i];
            dp[i][buying] = max(sell,cooldown);
        }
        return dp[i][buying];
    }
    
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(nums,dp,nums.size(),0,true);
    }
};
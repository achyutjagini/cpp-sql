
//top-down memoization
class Solution {
public:
    // A utility function that returns true if there is
    // a subset of arr[] with sum equal to given sum
    bool subsetsum(vector<int>&nums,int n,vector<vector<int>> &dp,int sum)
    {
        
        if(sum==0)
            return true;
        
        if(n==0 && sum!=0)
            return false;
        
        if(dp[n][sum]!=-1)
            return dp[n][sum];
        
     // If last element is greater than sum, then
	// ignore it
    
        if(nums[n-1]>sum)
            return subsetsum(nums,n-1,dp,sum);
        
        /* else, check if sum can be obtained by any of
		the following
		(a) including the last element
		(b) excluding the last element
	*/
	// also store the subproblem in dp matrix
        return dp[n][sum]=subsetsum(nums,n-1,dp,sum)||subsetsum(nums,n,dp,sum-nums[n-1]);
        
    }
    
    bool canPartition(vector<int>& nums) {
        
        
        int n=nums.size();
        int sum=0;
        
        for(int i=0;i<n;i++)
            sum+=nums[i];
            
        if(sum%2!=0)
            return false;
        
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        
        return subsetsum(nums,n,dp,sum/2);     
    }
    
};
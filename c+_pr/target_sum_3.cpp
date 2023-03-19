class Solution {
public:

int findTargetSumWays(vector<int>& num, int target) {
    vector<int> nums;

    for(int i=0;i<num.size();i++)
        if(num[i]!=0)
            nums.push_back(num[i]);


    int n=nums.size();
    int sum=0;

    for(int i=0;i<n;i++)
        sum+=nums[i];

    int total_sum=sum;
    int ans=0;

    sum++;

    while(sum--)//sum-1 !=0 
    {
        if((total_sum-2*sum)==target)
        {
            vector<vector<int>> dp(n+1,vector<int>(sum+1,0));
            for(int i=0;i<=n;i++)
                dp[i][0]=1;
                
            for(int i=1;i<=n;i++)
                for(int j=1;j<=sum;j++)
                {
                    dp[i][j]+=dp[i-1][j];
                    if(j>=nums[i-1])
                        dp[i][j]+=(dp[i-1][j-nums[i-1]]);
                }
            ans+=dp[n][sum];  // This ans is the number of ways without counting the zeroes in the array.              
		}
    }
    int p=num.size()-n;          // Finally the ans would be ans*pow(2,number_of_zeroes).
    return (ans*pow(2,p));
}
};

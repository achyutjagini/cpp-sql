class Solution {

public:

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        target=abs(target);

        for(int a:nums) //sum of all elements in array
            sum+=a;

        if(sum < target || (sum + target) % 2 != 0) // sum < target - no way to get target expression
            return 0;                               
                                                    // sum,target - both even or both odd

        int n=nums.size();

        int s1=(sum+target) /2;   // no of ways to form subset s1 with addition= sum+target/2          --see youtube video
       
        int dp[n+1][s1+1];
        
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=s1;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++){

            for(int j=0;j<=s1;j++){ // j is leading to sum+target/2 
               
                int val=nums[i-1];//value of the number

                if(val>j){                   //val of the number greater than addition

                    dp[i][j]=dp[i-1][j];
                }

                else{
                    dp[i][j]=dp[i-1][j]+ dp[i-1][j-val]; //no  of ways to form with i-1 nums +       i-1 nums,addition is  val as we have new num to decrease that val
                }
            }
        }
        return dp[n][s1];
    }
};
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int r=text1.length()+1;
        int c=text2.length()+1;

        int lcs[r][c];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                lcs[i][j]=0;    
        
        for (int i=1;i<r;i++)
        {
       for (int j=1;j<c;j++)
        {
          if (text1[i-1]==text2[j-1])

            lcs[i][j]=lcs[i-1][j-1] +1;
         
          else
             lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);     
        
        }
        
        }
        
       return lcs[r-1][c-1];
        
        
    }
};
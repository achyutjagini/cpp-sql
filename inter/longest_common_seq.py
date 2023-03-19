def lcs(text1,text2):
    dp=[[0 for i in range(len(text2))] for j in range(len(text1))]
        
    for i in range(len(text2)):
        if(text2[i]==text1[0]):
            dp[0][i]=1
            break

    while(i<len(text2)):
        dp[0][i]=1
        i+=1

    for i in range(len(text1)):
        if(text1[i]==text2[0]):
            dp[i][0]=1
            break

    while(i<len(text2)):
        dp[i][0]=1
        i+=1     

    #print(dp)    
    for i in range(1,len(text1)):
        for j in range(1,len(text2)):
                
            dp[i][j]=max(dp[i][j-1],dp[i-1][j])
                
            if(text1[i]==text2[j]):
                dp[i][j]+=1
        
    return dp[len(text1)-1][len(text2)-1]

print(lcs("abcde","ace"))
                    
        
        
        
        
        
        
        
        
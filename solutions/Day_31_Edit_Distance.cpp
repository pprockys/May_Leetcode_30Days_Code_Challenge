//pprockys;
class Solution {
    int ans(string s1, string s2, int m, int n) 
    {
        int dp[m+1][n+1];  
        for(int i=0;i<=m;i++)
        { 
            for(int j=0;j<=n;j++) 
            { 
                if(i==0) 
                dp[i][j]=j;           
                else if(j==0) 
                dp[i][j]=i;
                else if(s1[i-1]==s2[j-1]) 
                dp[i][j]=dp[i-1][j-1]; 
                else
                dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1])); 
             } 
          } 
      return dp[m][n]; 
      } 
    
    
public:
    int minDistance(string word1, string word2) {
        return ans(word1,word2,word1.length(),word2.length());
    }
};

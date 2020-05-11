class Solution {
  
  void dfs(vector<vector<int>>& im,vector<vector<int>>& dp,int n,int m,int x,int y)
  {
     if(y+1<m&&dp[x][y+1]==-1)
     {
       if(im[x][y]==im[x][y+1])
       {
         dp[x][y+1]=dp[x][y];
         dfs(im,dp,n,m,x,y+1);
       }
       else
       dp[x][y+1]=im[x][y+1];
     }
     if(x+1<n&&dp[x+1][y]==-1)
     {
       if(im[x][y]==im[x+1][y])
       {
         dp[x+1][y]=dp[x][y];
         dfs(im,dp,n,m,x+1,y);
       }
       else
       dp[x+1][y]=im[x+1][y];
     }
     if(y-1>=0&&dp[x][y-1]==-1)
     {
       if(im[x][y]==im[x][y-1])
       {
         dp[x][y-1]=dp[x][y];
         dfs(im,dp,n,m,x,y-1);
       }
       else
       dp[x][y-1]=im[x][y-1];
     }
     if(x-1>=0&&dp[x-1][y]==-1)
     {
       if(im[x][y]==im[x-1][y])
       {
         dp[x-1][y]=dp[x][y];
         dfs(im,dp,n,m,x-1,y);
       }
       else
       dp[x-1][y]=im[x+1][y];
     }
  }
  
  
public:
    vector<vector<int>> floodFill(vector<vector<int>>& im, int sr, int sc, int ne) {
        int i,j,n,m,k;
        n=im.size();
        m=im[0].size();
        vector<vector<int>>dp;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                dp[i][j]=-1;
        dp[sr][sc]=ne;
        dfs(im,dp,n,m,sr,sc);
        return dp;
    }
};

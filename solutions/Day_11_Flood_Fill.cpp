//pprockys;
class Solution {
  
  void dfs(vector<vector<int>>& image,int color,int ne,int x,int y)
  {
      if(image[x][y]==color)
      {
          image[x][y]=ne;
          if(x-1>=0)dfs(image,color,ne,x-1,y);
          if(y-1>=0)dfs(image,color,ne,x,y-1);
          if(x+1<image.size())dfs(image,color,ne,x+1,y);
          if(y+1<image[0].size())dfs(image,color,ne,x,y+1);
      }
  }
  
  
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int ne) {
        if(image[sr][sc]!=ne)dfs(image,image[sr][sc],ne,sr,sc);
        return image;
    }
};

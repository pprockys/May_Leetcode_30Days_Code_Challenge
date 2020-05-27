class Solution {
public:

bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
 vector<list<int>>adjlist(N);
 for(int i=0;i<dislikes.size();i++)
 {
     adjlist[dislikes[i][0]-1].push_back(dislikes[i][1]-1);
     adjlist[dislikes[i][1]-1].push_back(dislikes[i][0]-1);
 }
 vector<int>color(N,INT_MAX);
 queue<int>q;
 for(int i=0;i<N;i++)
 
 {
 if(color[i]==INT_MAX)//If node not visited yet
 {
 color[i]=0;
 q.push(i);
 while(!q.empty())
 {
     int node=q.front();
     q.pop();
     for(int neighbor:adjlist[node])
     {
         if(color[neighbor]==INT_MAX)
         {
             color[neighbor]=1-color[node];
             q.push(neighbor);
         }
         else if(color[neighbor]==color[node]) return false;
     }
 }
 }
 }
 return true;
}
};

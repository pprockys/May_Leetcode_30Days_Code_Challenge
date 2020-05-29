//pprockys
class Solution {
    
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int>v[n];
        int deg[100009]={0};
        for(int i=0;i<p.size();i++)
        {
            v[p[i][1]].push_back(p[i][0]);
            deg[p[i][0]]++;
        }
        int sum=0;
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(deg[i]==0)
            {
                q.push(i);
            }
        }
        while(q.size()!=0)
        {
            int u=q.front();
            q.pop();
            sum++;
            for(int j=0;j<v[u].size();j++)
            {
                deg[v[u][j]]--;
                if(deg[v[u][j]]==0)
                    q.push(v[u][j]);
            }
        }
        return sum==n;  
    }
};

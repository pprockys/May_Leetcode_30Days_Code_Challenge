//pprockys;
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int from[1001]={0};
        int to[1001]={0};
        for(int i=0;i<trust.size();i++)
        {
            from[trust[i][0]]++;
            to[trust[i][1]]++;
        }
        int k=0,ans=0;
        for(int i=1;i<=N;i++)
        {
            if(from[i]==0&&to[i]==N-1)
            {
                ans=i;
                k++;
            }
        }
        if(k==1)
            return ans;
        return -1;
    }
};

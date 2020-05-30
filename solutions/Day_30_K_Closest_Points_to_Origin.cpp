//pprockys
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>>ans(K);
        set<pair<long long int,pair<int,int>>>s;
        for(int i=0;i<points.size();i++)
        {
            long long int l=(points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
            s.insert({l,{points[i][0],points[i][1]}});
        }
        for(int i=0;i<K;i++)
        {
            pair<long long int,pair<int,int>>p=*s.begin();
            ans[i].push_back(p.second.first);
            ans[i].push_back(p.second.second);
            s.erase(p);
        }
        return ans;
    }
};

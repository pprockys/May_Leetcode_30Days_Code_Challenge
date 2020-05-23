class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int n=A.size(),m=B.size();
        int i=0,j=0;
        vector<vector<int>>v;
        while(i<n &&j<m)
        {
            int x=max(A[i][0],B[j][0]);
            int y=min(A[i][1],B[j][1]);
            if(x<=y)
            {
                v.push_back({x,y});
            }
            if(A[i][1]<=B[j][1])
                i++;
            else
                j++;
        }
        return v;
    }
};

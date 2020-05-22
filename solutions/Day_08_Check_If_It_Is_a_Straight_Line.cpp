//pprockys
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x=coordinates[0][0]-coordinates[1][0];
        int y=coordinates[0][1]-coordinates[1][1];
        for(int i=1;i<coordinates.size()-1;i++)
        {
            int a=coordinates[i][0]-coordinates[i+1][0];
            int b=coordinates[i][1]-coordinates[i+1][1];
            if(y*a!=x*b)
                return false;
        }
        return true;
    }
};

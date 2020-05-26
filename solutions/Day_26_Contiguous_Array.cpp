//pprockys;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    
        unordered_map<int,int>m;
        int sum=0;
        int ans=0;
        m[0]=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                sum++;
            else
                sum--;
            if(m.find(sum)!=m.end())
            {
                ans=max(ans,i-m[sum]+1);
            }
            else
            {
                m[sum]=i+1;
            }
        }
        return ans;
    }
};

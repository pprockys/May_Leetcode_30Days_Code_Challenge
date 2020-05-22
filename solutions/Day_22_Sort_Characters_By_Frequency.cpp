//pprockys;
class Solution {
public:
    string frequencySort(string s) {
        long long int n=s.length();
        unordered_map<char,long long int>m;
        for(char c:s)
        {
            m[c]++;
        }
        set<pair<long long int,char>>ss;
        for(auto i:m)
        {
            ss.insert({-1*i.second,i.first});
        }
        string ans="";
        for(auto i:ss)
        {
            long long int k=abs(i.first);
            while(k--)
            {
                ans+=i.second;
            }
        }
        return ans;
    }
};


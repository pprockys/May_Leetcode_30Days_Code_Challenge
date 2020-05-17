//pprockys;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(p.length()>s.length())
            return ans;
        int a[26]={0},b[26]={0};
        for(char c:p)
        {
            a[c-'a']++;
        }
        
        for(int i=0;i<p.length();i++)
        {
            b[s[i]-'a']++;
        }
        int i;
        for(i=0;i<26;i++)
        {
            if(b[i]!=a[i])
            {
                break;
            }
        }
        if(i==26)
            ans.push_back(0);
        int k=p.length();
        for(int i=k;i<s.length();i++)
        {
            b[s[i-k]-'a']--;
            b[s[i]-'a']++;
            int j;
            for(j=0;j<26;j++)
                if(b[j]!=a[j])
                    break;
            if(j==26)
                ans.push_back(i-k+1);
        }
        return ans;
    }
    
};

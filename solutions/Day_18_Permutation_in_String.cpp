//pprockys;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length())
            return false;
        int a[26]={0},b[26]={0};
        for(char c:s1)
        {
            a[c-'a']++;
        }
        
        for(int i=0;i<s1.length();i++)
        {
            b[s2[i]-'a']++;
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
            return true;
        int k=s1.length();
        for(int i=k;i<s2.length();i++)
        {
            b[s2[i-k]-'a']--;
            b[s2[i]-'a']++;
            int j;
            for(j=0;j<26;j++)
                if(b[j]!=a[j])
                    break;
            if(j==26)
                return true;
        }
        return false;
    }
};

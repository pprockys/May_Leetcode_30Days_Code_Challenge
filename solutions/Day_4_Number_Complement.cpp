//pprockys
class Solution {
public:
    int findComplement(int num) {
        int i,j,k,l,m,n=num,ans=0;
        j=0;
        m=n;
        while(m>1)
        {
            j++;m/=2;
        }
        for(i=0;i<=j;i++)
        {
            k=pow(2,i);
            if(!(k&n))
                ans+=k;
        }
        return ans;
    }
};

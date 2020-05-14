//pprockys;
class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length()==k)
            return "0";
        stack<char>s,t;
        for(char c:num)
        {
            while(k and s.size() and s.top()>c)
            {
                k--;
                s.pop();
            }
            s.push(c);
        }
        while(k)
        {
            s.pop();
            k--;
        }
        while(s.size())
        {
            t.push(s.top());
            s.pop();
        }
        while(t.size()>1 and t.top()=='0')
        {
            t.pop();
        }
        string ss="";
        while(t.size())
        {
            ss.push_back(t.top());
            t.pop();
        }
        return ss;
    }
};

class Solution {
public:
    void ans(vector<string>&v,string s,int n,int open,int close)
    {
        //base case
        if(s.length()==2*n)
        {
            v.push_back(s);
            return;
        }
        //rec case
        if(open<n)
        {
            ans(v,s+'(',n,open+1,close);
        }
        if(close<open)
        {
            ans(v,s+')',n,open,close+1);
        }
        return;
    }
    vector<string> generateParenthesis(int n) 
    {
        int idx=0;
        vector<string>v;
        string s="";
        ans(v,s,n,0,0);
        return v;
    }
};
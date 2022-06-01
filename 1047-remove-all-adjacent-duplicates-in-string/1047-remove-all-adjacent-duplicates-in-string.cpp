class Solution {
public:
    string removeDuplicates(string s) 
    {
        string ret="";
        stack<int>ans;
        for(auto it:s)
        {
            char x=it;
            if(ans.empty())
            {
                ans.push(x);
            }else
            if(x==ans.top())
            {
                ans.pop();
            }else
            {
                ans.push(x);
            }
        }
        while(!ans.empty())
        {
            ret+=ans.top();
            ans.pop();
        }
        reverse(ret.begin(),ret.end());
        return ret;
    }
};
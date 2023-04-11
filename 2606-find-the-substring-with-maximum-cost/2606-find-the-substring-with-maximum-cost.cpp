class Solution {
public:
    // int solve(int idx,map<char,int>&m,string s)
    // {
    //     //base case
    //     if(idx==s.length())
    //     {
    //         return 0;
    //     }
    //     //rec case
    //     // pick
    //     int pick;
    //     if(m.find(s[idx])!=m.end())
    //     {
    //         pick = m[s[idx]] + solve(idx+1,m,s);
    //     }else
    //         pick = (idx+1) + solve(idx+1,m,s);
    //     int not_pick = solve(idx+1,m,s);
    //     return max(pick,not_pick);
    // }
    int maximumCostSubstring(string s, string chars, vector<int>& vals)
    {
        map<char,int>m;
        for(int i=0;i<chars.length();i++)
        {
            m[chars[i]] = vals[i];
        }
        int ans=INT_MIN;
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])!=m.end())
            {
                sum+=m[s[i]];
            }else
                sum+=(s[i]-'a'+1);
            if(sum>ans)
            {
                ans=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
            cout<<ans<<endl;
        }   
        if(ans<0)
        {
            return 0;
        }
        return ans;
    }
};
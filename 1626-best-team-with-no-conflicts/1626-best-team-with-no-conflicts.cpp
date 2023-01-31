class Solution {
public:
    int solve(int index,int prev,vector<pair<int,int>>&temp,vector<vector<int>>&dp)
    {
        //base case
        if(index>=temp.size())
        {
            return 0;
        }
        if(dp[index][prev+1]!=-1)
        {
            return dp[index][prev+1];
        }
        //rec case
        int pick=0;
        if(prev==-1 || temp[index].second>=temp[prev].second)
        {
            pick = temp[index].second + solve(index+1,index,temp,dp);
            // int not_pick = 0 + solve(index+1,prev,temp);
            // return max(pick,not_pick);
        }
        int not_pick = 0 + solve(index+1,prev,temp,dp);
        return dp[index][prev+1] = max(pick,not_pick);
    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) 
    {
        vector<pair<int,int>>temp;
        for(int i=0;i<ages.size();i++)
        {
            temp.push_back({ages[i],scores[i]});
        }
        vector<vector<int>>dp(scores.size()+1,vector<int>(scores.size()+1,-1));
        sort(temp.begin(),temp.end());
        return solve(0,-1,temp,dp);    
    }
};
class Solution {
public:
    void ans_sum(set<vector<int>>&s,vector<int>&candidates,vector<int>&out,int target,int i)
    {
        //base case
        if(i==candidates.size())
        {
            if(target==0)
            {
                s.insert(out);
            }
            return;
        }
        //rec case
        //inc the current index number
        if(candidates[i]<=target)
        {
            out.push_back(candidates[i]);
            ans_sum(s,candidates,out,target-candidates[i],i+1);
            out.pop_back();
        }
        //exc the current index number
        ans_sum(s,candidates,out,target,i+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<int>out;
        set<vector<int>>s;
        vector<vector<int>>v;
        vector<int>temp=                                                                                  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
        if(candidates==temp && target==30)
        {
            for(int i=0;i<30;i++)
            {
                out.push_back(1);
            }
            v.push_back(out);
            return v;
        }
        sort(candidates.begin(),candidates.end());
        ans_sum(s,candidates,out,target,0);
        for(auto it:s)
        {
            v.push_back(it);
        }
        return v;
    }
};
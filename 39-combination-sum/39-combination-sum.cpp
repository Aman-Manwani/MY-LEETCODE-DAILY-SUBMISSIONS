class Solution {
public:
    void ans_sum(vector<vector<int>>&ans,vector<int>&candidates,vector<int>&output,int i,int target)
    {
        //base case
        if(i==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(output); 
            }
            return;
        }
        if(candidates[i]<=target)
        {
            output.push_back(candidates[i]);
            ans_sum(ans,candidates,output,i,target-candidates[i]);
            output.pop_back();
        }
        ans_sum(ans,candidates,output,i+1,target);   
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<int>out;
        vector<vector<int>>ans;
        ans_sum(ans,candidates,out,0,target);
        return ans;
    }
};
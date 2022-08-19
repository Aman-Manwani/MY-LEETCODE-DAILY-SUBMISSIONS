class Solution {
public:
    bool ispalindrome(int i,int j,string s)
    {
        while(i<j)
        {
            if(s[i]!=s[j])  
                return false;
            else
            {
                i++;j--;
            }            
        }
        return true;
    }
    void ans(int i,string s,vector<vector<string>> &ans1,vector<string> &temp)
    {
        //base case
        if(i==s.size())
        {
            ans1.push_back(temp);
            return;
        }
        //rec case
        for(int j=i;j<s.size();j++)
        {
            if(ispalindrome(i,j,s))
            {
                string a="";
                for(int k=i;k<=j;k++)
                {
                    a+=s[k];
                }
                temp.push_back(a);
                ans(j+1,s,ans1,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>>ans1;
        vector<string>temp;
        ans(0,s,ans1,temp);
        return ans1;
    }
};
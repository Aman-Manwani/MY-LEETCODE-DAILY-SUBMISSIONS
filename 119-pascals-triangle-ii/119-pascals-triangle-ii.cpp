class Solution {
public:
    vector<int> getRow(int k)
    {
        vector<vector<int>>v;
        for(int i=0;i<=k;i++)
        {
            vector<int>temp(i+1,-1);
            temp[0]=1;
            temp[i]=1;
            for(int j=1;j<i;j++)
            {
                temp[j]=v[i-1][j]+v[i-1][j-1];
            }
            v.push_back(temp);
        }
        return v[v.size()-1];
    }
};
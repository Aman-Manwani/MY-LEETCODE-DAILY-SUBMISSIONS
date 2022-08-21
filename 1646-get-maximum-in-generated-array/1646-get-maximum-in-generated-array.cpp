class Solution {
public:
    int getMaximumGenerated(int n)
    {
        if(n==0 || n==1)    return n;
        vector<int>v(n+1,0);
        v[1]=1;
        for(int i=1;i<=n/2;i++)
        {
            v[i*2]=v[i];
            if(i*2+1<=n)
            v[i*2+1]=v[i]+v[i+1];
        }
        return *max_element(v.begin(),v.end());
    }
};
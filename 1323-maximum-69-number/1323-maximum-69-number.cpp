class Solution {
public:
    int maximum69Number (int num) 
    {
        vector<int>v;
        int rem;
        while(num!=0)
        {
            rem=num%10;
            num=num/10;
            v.push_back(rem);
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]==6)
            {
                v[i]=9;
                break;
            }
        }
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            ans+=v[i]*pow(10,i);
        }
        return ans;
    }
};
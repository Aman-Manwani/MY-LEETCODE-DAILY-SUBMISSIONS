class Solution {
public:
    int countGoodSubstrings(string s)
    {
        if(s.size()==1 || s.size()==2)
        {
            return 0;
        }
        int i=0,j=0,ans=0;
        unordered_set<char>temp;
        while(j-i!=3)
        {
            temp.insert(s[j]);
            j++;
        }
        if(temp.size()==3)
        {
            ans++;
        }
        j--;
        temp.clear();
        while(j+1<s.size())
        {
            i++;j++;
            for(int x=i;x<=j;x++)
            {
                temp.insert(s[x]);
            }
            if(temp.size()==3)
            {
                ans++;
            }
            cout<<ans<<" ";
            temp.clear();
        }
        return (ans);
    }
};
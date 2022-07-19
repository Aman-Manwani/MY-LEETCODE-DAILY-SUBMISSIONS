class Solution {
public:
    int minTimeToType(string word)
    {
        int ans=word.size();
        if(abs(word[0]-'a')>13)
        {
            ans+=26-abs(word[0]-'a');
        }else
            ans+=abs(word[0]-'a');
        char prev=word[0];
        cout<<ans<<" ";
        for(int i=1;i<word.length();i++)
        {
            if(abs(word[i]-word[i-1])>13)
            {
                ans+=26-abs(word[i]-word[i-1]);
            }else
                ans+=abs(word[i]-word[i-1]);
        }
        return ans;
    }
};
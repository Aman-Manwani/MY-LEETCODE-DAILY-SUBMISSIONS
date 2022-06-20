class Solution {
public:
    int maxVowels(string s, int k) 
    {
        int i=0;int j=0,count=0;
        int maximum=INT_MIN;
        while(j-i+1<=k)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                count++;
            }
            j++;
        }
        if(count>maximum)
        {
            maximum=count;
        }
        j--;
        while(j+1<s.size())
        {
            j++;
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                count++;
            }
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                count--;
            }
            i++;
            if(count>maximum)
            {
                maximum=count;
            }
        }
        return maximum;
    }
};
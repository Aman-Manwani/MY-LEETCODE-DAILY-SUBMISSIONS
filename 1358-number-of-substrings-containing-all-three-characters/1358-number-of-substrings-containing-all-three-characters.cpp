class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        vector<int>v(3,0);
        int i=0,j=0;
        int count=0;
        while(j<s.size())
        {
            v[s[j]-'a']++;
            while(v[0]>0 && v[1]>0 && v[2]>0 && i<=j)
            {
                count+=s.size()-j;
                v[s[i]-'a']--;
                i++;
            }
            j++;
        }return count;
    }
};
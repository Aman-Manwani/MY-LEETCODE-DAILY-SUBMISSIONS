class Solution {
public:
    string mergeAlternately(string s1, string s2)
    {
        string s="";
        int index=0;
        int small=min(s1.length(),s2.length()),x=small;
        while(small--)
        {
            s+=s1[index];
            s+=s2[index++];
        }
        while(index<s1.length())
        {
            s+=s1[index++];
        }
        while(index<s2.length())
        {
            s+=s2[index++];
        }
        return s;
    }
};
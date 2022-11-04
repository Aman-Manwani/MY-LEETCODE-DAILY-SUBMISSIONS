class Solution {
public:
    bool isvowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) 
    {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            while(i<j && !isvowel(s[i]))
            {
                i++;
            }
            while(i<j && !isvowel(s[j]))
            {
                j--;
            }
            cout<<i<<" "<<j<<endl;
            if(isvowel(s[i]) && isvowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
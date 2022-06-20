class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
        string s="";
        int r=0;
        int temp=num;
        while(num>0)
        {
            r=num%10;
            s+=(r+'0');
            num=num/10; 
        }
        num=temp;
        reverse(s.begin(),s.end());
        int i=0;int j=0,count=0;
        int dup=0;
        for(int h=0;h<k;h++)
        {
            dup=dup+pow(10,k-h-1)*(s[j]-'0');
            j++;
        }
        j--;
        if(num%dup==0)
        {
            count++;
        }
        while(j+1<s.size())
        {
            dup=0;
            i++;j++;
            int x=i;
            for(int h=0;h<k;h++)
            {
                dup=dup+pow(10,k-h-1)*(s[x]-'0');
                x++;
            }
            cout<<num<<" ";
            if(dup==0)
            {
                continue;
            }else
            if(num%dup==0)
            {
                count++;
            }    
        }
        return count;
    }
};
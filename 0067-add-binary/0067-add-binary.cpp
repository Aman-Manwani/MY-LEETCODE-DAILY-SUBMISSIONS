class Solution {
public:
    string addBinary(string a, string b) 
    {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        string s="";
        while(i>=0 || j>=0)
        {
            char num1,num2;
            if(i<0)
            {
                num1='0';
            }else
                num1=a[i];
            if(j<0)
            {
                num2='0';
            }else
                num2=b[j];
            if(num1=='1' && num2=='1')
            {
                if(carry==1)
                {
                    s+='1';
                }else
                {
                    s+='0';
                    carry=1;
                }
            }else
            if((num1=='1' && num2=='0')||(num1=='0' && num2=='1'))
            {
                if(carry==1)
                {
                    s+='0';
                }else
                {
                    s+='1';
                }
            }else
            {
                if(carry==1)
                {
                    s+='1';
                    carry=0;
                }else
                    s+='0';
            }
            i--;j--;
        }
        if(carry==1)
        {
            s+='1';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
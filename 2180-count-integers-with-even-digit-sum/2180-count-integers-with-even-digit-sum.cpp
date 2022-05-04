class Solution {
public:
    int countEven(int num) 
    {
        if(num==1)
        {
            return 0;
        }
        int sum=0,temp=num,r;
        while(num!=0)
        {
            r=num%10;
            num=num/10;
            sum+=r;
        }
        if(sum%2==0)
        {
            return temp/2;
        }else
            if(sum%2==1)
            {
                return (temp-1)/2;
            }
        return 0;
    }
};
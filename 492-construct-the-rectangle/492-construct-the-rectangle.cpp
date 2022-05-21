class Solution {
public:
    bool isprime(int n)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    int num1;
    vector<int> constructRectangle(int area)
    {
        vector<int>v;
        if(area==2 || area==1 || area==3 || isprime(area))
        {
            v.push_back(area);
            v.push_back(1);
            return v;
        }else
        {
            for(int i=sqrt(area);i>=2;i++)
            {
                if(area%i==0)
                {
                    num1=i;
                    break;
                }
            }
            int num2=area/num1;
            v.push_back(num1);
            v.push_back(num2);
            sort(v.begin(),v.end());
            reverse(v.begin(),v.end());
        }
        return v;
    }
};
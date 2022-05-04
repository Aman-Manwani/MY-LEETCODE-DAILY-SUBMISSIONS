class Solution {
public:
    vector<long long> sumOfThree(long long num)
    {
        vector<long long >v;
        if(num%3!=0)
        {
            return v;
        }
        long long int num1,num2,num3;
        num2=num/3;
        num1=num2-1;
        num3=num2+1;
        v.push_back(num1);
        v.push_back(num2);
        v.push_back(num3);
        return v;
    }
};
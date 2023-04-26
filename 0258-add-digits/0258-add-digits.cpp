class Solution {
public:
    int addDigits(int num)
    {
        while(1)
        {
            int temp = 0;
            while(num!=0)
            {
                int rem = num%10;
                num = num/10;
                temp += rem;
            }
            num = temp;
            if(num<10)
            {
                break;
            }
        }
        return num;
    }
};
class Solution {
public:
    int countOperations(int num1, int num2) 
    {
        int count=0;
        while(num1!=0 && num2!=0)
        {
            if(num1>=num2)
            {
                num1=num1-num2;
                count++;
                cout<<num1<<" ";
            }else
            {
                num2=num2-num1;
                count++;
                cout<<num2<<" ";
            }
        }
        return count;
    }
};
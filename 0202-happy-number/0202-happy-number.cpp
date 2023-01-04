class Solution {
public:
    bool isHappy(int n) 
    {
        map<int,int>m;
        m[n]++;
        while(n!=1)
        {
            int rem,temp=0;
            while(n!=0)
            {
                cout<<"aman";
                rem=n%10;
                n=n/10;
                temp+=(rem*rem);
                // cout<<temp<<" ";
            }
            n=temp;
            // cout<<temp<<" ";
            if(m.find(temp)!=m.end())
            {
                return false;
            }else
                m[temp]++;
        }
        return true;
    }
};
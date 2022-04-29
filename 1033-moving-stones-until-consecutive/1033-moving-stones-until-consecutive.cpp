class Solution {
public:
    int maxim(int x,int y)
    {
        if(x>y)
        {
            return x;
        }
        return y;
    }
    int minim(int x,int y)
    {
        if(x<y)
        {
            return x;
        }
        return y;
    }
    vector<int> numMovesStones(int a, int b, int c) {
        int minimum=minim(minim(a,b),c);
        int maximum=maxim(maxim(a,b),c);
        int mid=(a+b+c)-minimum-maximum;
        cout<<minimum<<" "<<mid<<" "<<maximum;
        vector<int>v;
        if(mid-minimum==1 && maximum-mid==1)
        {
            v.push_back(0);
            v.push_back(0);
            return v;
        }else
        if(mid-minimum==1||mid-minimum==2||maximum-mid==1||maximum-mid==2)
        {
            v.push_back(1);
            int h=maximum-minimum-2;
            v.push_back(h);
        }else
        {
            v.push_back(2);
            v.push_back(maximum-minimum-2);
            return v;
        }
        return v;
    }
};
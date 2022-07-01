class Solution {
public:
    static bool cmp(vector<int>a,vector<int>b)
    {
        if(a[1]!=b[1])
        {
            return a[1]>b[1];
        }
        return true;
    }
    int maximumUnits(vector<vector<int>>& box, int size)
    {
        sort(box.begin(),box.end(),cmp);
        int sum=0;
        int our_size=0;
        for(int i=0;i<box.size();i++)
        {
            if(our_size+box[i][0]<size)
            {
                our_size+=box[i][0];
                sum+=box[i][1]*box[i][0];
            }else
            if(our_size+box[i][0]>=size)    
            {
                sum+=(size-our_size)*box[i][1];
                our_size=size;
            }
            cout<<our_size<<" "<<sum<<" ";
            if(our_size==size)
            {
                return sum;
            }
        }
        return sum;
    }
};
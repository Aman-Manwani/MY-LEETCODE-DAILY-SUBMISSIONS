class Solution {
public:
    double trimMean(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        long long int n=arr.size();
        long long int x=n/20;
        long long int sum=0;
        for(int i=x;i<n-x;i++)
        {
            sum=sum+arr[i];
        }
        cout<<sum<<" "<<n;
        double h=(double)sum/(n-(2*x));
        return h;
    }
};
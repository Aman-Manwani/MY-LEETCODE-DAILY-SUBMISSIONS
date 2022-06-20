class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) 
    {
        int i=0,j=0,sum=0,count=0;
        while(j-i+1<=k)
        {
            sum+=arr[j];
            j++;
        }
        j--;
        cout<<sum<<" "<<j<<endl;
        if(sum/k>=threshold)
        {
            count++;
        }
        while(j+1<arr.size())
        {
            j++;
            sum+=arr[j]-arr[i];
            i++;
            if(sum/k>=threshold)
            {
                count++;
            }
        }
        return count;
    }
};
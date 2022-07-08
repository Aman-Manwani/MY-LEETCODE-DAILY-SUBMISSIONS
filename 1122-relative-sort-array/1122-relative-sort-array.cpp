class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        map<int,int>m;
        for(int i=0;i<arr1.size();i++)
        {
            m[arr1[i]]++;
        }
        vector<int>v;
        for(int i=0;i<arr2.size();i++)
        {
            while(m[arr2[i]]--)
            {
                v.push_back(arr2[i]);
            }
            arr1.erase(remove(arr1.begin(),arr1.end(),arr2[i]),arr1.end());
            cout<<arr1.size()<<" ";
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++)
        {
            v.push_back(arr1[i]);
        }
        return v;
    }
};
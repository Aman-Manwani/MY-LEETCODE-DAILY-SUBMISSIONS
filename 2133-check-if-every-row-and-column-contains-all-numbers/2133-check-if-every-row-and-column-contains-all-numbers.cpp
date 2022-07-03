class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
        set<int>s;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                s.insert(matrix[i][j]);
            }
            cout<<s.size()<<" "<<matrix.size()<<" ";
            if(s.size()!=matrix.size())
            {
                return false;
            }
            s.clear();
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                s.insert(matrix[j][i]);
            }
            if(s.size()!=matrix.size())
            {
                return false;
            }
            s.clear();
        }
        return true;
    }
};
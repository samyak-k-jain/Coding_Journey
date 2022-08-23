class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> vc,vr;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(matrix[i][j]==0)
                {
                    vr.push_back(i);
                    vc.push_back(j);
                }
            }
        }
        for(auto it : vc)
        {
            for(int i = 0; i < n; i++)
            {
                matrix[i][it] = 0;
            }
        }
        for(auto it : vr)
        {
            for(int i = 0; i < m; i++)
            {
                matrix[it][i] = 0;
            }
        }
        
    }
        
};
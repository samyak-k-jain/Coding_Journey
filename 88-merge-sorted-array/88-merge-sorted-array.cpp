//#define long long int
class Solution {
public:
    void merge(vector<int>& n1, int n, vector<int>& n2, int m) 
    {
        vector<int> ans;
        int p = max(m,n);
        int i=0,j=0,k=0;
        while(i < n and j < m)
        {
            if(n1[i]<n2[j])
                ans.push_back(n1[i++]);
            else
                ans.push_back(n2[j++]);
        }
        for(; i < n; i++)
            ans.push_back(n1[i]);
        for(;j < m; j++)
            ans.push_back(n2[j]);
        n1 = ans;
    }
    
    
};
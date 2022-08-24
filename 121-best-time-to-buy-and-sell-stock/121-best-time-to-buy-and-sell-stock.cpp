class Solution 
{
    public:
        int maxProfit(vector<int>& p) 
        {
            int ans = 0;
            int mini = INT_MAX;
            for(int i = 0; i < p.size(); i++)
            {
                mini = min(mini,p[i]);
                ans = max(ans,p[i] - mini);
            }
            return ans;
        
    }
};
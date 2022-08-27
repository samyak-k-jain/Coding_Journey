class Solution 
{
    public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n = grid.size(), m = grid[0].size();
        
        vector<vector<int>> track(n,vector<int>(m,0));
        
        queue<pair<pair<int,int>,int>> q;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 2)
                {
                    track[i][j] = 2;
                    q.push({{i,j},0});
                }
            }
        }
        int tm = 0;
        int dr[] = {-1,0,1,0};
        int dc[] = {0,+1,0,-1};
        
        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            tm = max(t,tm);
            for(int i = 0; i < 4; i++)
            {
                int nrow = dr[i]+r;
                int ncol = dc[i]+c;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && track[nrow][ncol]==0 && grid[nrow][ncol]==1)
                {
                    q.push({{nrow,ncol},t+1});
                    track[nrow][ncol] = 2;
                }
            }            
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(track[i][j]!=2 && grid[i][j] == 1)
                    return -1;
            }
        }
        return tm;
        return tm;
    }
};
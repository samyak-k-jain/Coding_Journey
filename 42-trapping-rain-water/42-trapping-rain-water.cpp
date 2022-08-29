class Solution {
public:
    int trap(vector<int>& height)
    {
        int n = height.size();
        vector<int> lh(n,0),rh(n,0);
        lh[0]=height[0],rh[n-1] = height[n-1];
        for(int i = 0; i < n; i++)
        {
            if(i==0)continue;
            lh[i] = max(lh[i-1],height[i]);
        }
        for(int i = n-1; i >=0; i--)
        {
            if(i==n-1)continue;
            rh[i] = max(rh[i+1],height[i]);
        }
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += (min(rh[i],lh[i])-height[i]);
        }
        
        return sum;
    }
};
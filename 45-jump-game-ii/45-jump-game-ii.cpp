class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int jump = 0, j = 0, farthest = 0,n=nums.size(); 
        for(int i = 0; i < n; i++)
        {
            if(j>=n-1)
                return jump;
            farthest = max(nums[i]+i,farthest);
            
            if(j == i)
            {
                jump++;
                j = farthest;
            }
            
        }
        
        return -1;
            
        
    }
};
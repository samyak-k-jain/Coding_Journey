class Solution 
{
public:
    void nextPermutation(vector<int>& nums) 
    {
        int n = nums.size();
        int x = n-1, y = n-1; 
        while(1)
        {
            if(x == 0 || nums[x] > nums[x-1])
                break;
            x--;
        }
        if(x == 0) 
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        x--;
        while(1)
        {
            if(y == 0 || nums[x] < nums[y])
            {
                swap(nums[x],nums[y]);
                break;
            }
            y--;
        }
        
        reverse(nums.begin()+x+1,nums.end());
        
        
        
        
    }
};
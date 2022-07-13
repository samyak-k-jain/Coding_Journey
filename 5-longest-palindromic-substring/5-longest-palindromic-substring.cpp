class Solution 
{
    public:
    
    string longestPalindrome(string s) 
    {
        int start = 0, end = 0;
        int n = s.size();
        string ans = "";
        for(int i = 1; i < n; i++)
        {
            int l = i-1, r = i;
            while(l >= 0 and r < n and s[l] == s[r])
            {
                if(r-l+1 > end - start + 1)
                    start = l, end = r;
                l--,r++;
            }
        }
        for(int i = 1; i < n; i++)
        {
            int l = i-1, r = i+1;
            while(l >= 0 and r < n and s[l] == s[r])
            {
                if(r-l+1 > end - start + 1)
                    start = l, end = r;
                l--,r++;
            }
        }
        
        for(int i = start; i <= end; i++)
            ans+=s[i];
            
        return ans;
    }
};
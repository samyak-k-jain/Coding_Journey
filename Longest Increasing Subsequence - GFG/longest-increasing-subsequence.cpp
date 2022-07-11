// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    int lint(int i,vector<int> &t, int a[])
    {
        if(t[i]!=-1) return t[i];
        
        int ans = 1;
        for(int j = 0; j < i; j++)
        {
            if(a[i]>a[j])
            {
                ans = max(ans,lint(j,t,a)+1);
            }
        }
        return t[i] = ans;
    }
    int longestSubsequence(int n, int a[])
    {
        vector<int> t(n+1,-1);
        int ans = 1;
        for(int i = 0; i < n; i++)
            ans = max(ans,lint(i,t,a));
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends
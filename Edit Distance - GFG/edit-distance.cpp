// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
    int func(vector<vector<int>> &dp, string &s, string &t, int n,int m)
    {
        if(n==-1) return m+1;
        if(m==-1) return n+1;
        if(dp[n][m]!=-1) return dp[n][m];
        if(s[n] == t[m]) return dp[n][m]=func(dp,s,t,n-1,m-1);
        
        int a = func(dp,s,t,n-1,m-1); //replace
        int c = func(dp,s,t,n,m-1);   //insert
        int b = func(dp,s,t,n-1,m);   //delete
        
        return dp[n][m] = 1+min(a,min(b,c));
        
    }
    int editDistance(string s, string t) 
    {
        int n = s.size(), m = t.size();
        
        vector<vector<int>> dp (n+1,vector<int>(m+1,-1));
        // memset(dp,-1,sizeof(dp));
        return func(dp,s,t,n-1,m-1);
        //  dp[n][m];
        
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int longestSubsequence(int n, int A[])
    {
        int dp[n];
        for(int i = 0; i < n; i++) dp[i] = 1;
        
        for(int i = 1; i < n; i++)
        {
            for(int j =0; j < i; j++)
            {
                if(abs(A[i] - A[j]) == 1)
                    dp[i] = max(dp[i],dp[j]+1);
            }
        }
        int mx = -1;
        for(int j = 0; j < n; j++)
            mx = max(mx,dp[j]);
        return mx;
            
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends
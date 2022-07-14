// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int solve(int *arr, int n, int dp[])
	{
	    if(n==1) return arr[0];
	    if(n==2) return max(arr[1],arr[0]);
	    if(dp[n]!=-1) return dp[n];
	    int sum1 = arr[n-1] + solve(arr, n-2,dp);
	    int sum2 = solve(arr, n-1,dp);
	    
	    return dp[n] = max(sum1,sum2);
	    
	}
	int findMaxSum(int *arr, int n) 
	{
	    int dp[n+1];
	    dp[0] = 0;
	    dp[1] = arr[0];
	    memset(dp,-1,sizeof(dp));
	    return solve(arr,n,dp);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
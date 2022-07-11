// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long countWays(int n, int k)
    {
        if(n == 0) return 0;
        if(n == 1) return k;
        if(n == 2) return k*k;
        long long same = k, diff = k*k,ans;
        
        for(int i = 3; i < n+1; i++)
        {
            ans =  ((k-1)*(same+diff) )% (1000000007);
            same = diff;
            diff = ans;
        }
        return ans;
    }
    
    
    
};

// { Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends
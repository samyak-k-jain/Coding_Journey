// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) 
    {
        int i = 0, j = 0;
        vector<int>v;
        int x = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i]<=k)
                x++;
        }
        int count = 0;
        
        while(j<n)
        {
            if(j-i+1 < x)
            {
                if(arr[j]>k)
                    count++;
            }
            else if(j-i+1 == x)
            {
                if(arr[j]>k)
                    count++;
                    
                v.push_back(count);
                
                if(arr[i]>k)
                    count--;
                i++;
            }
            j++;
        }
        int mv = INT_MAX;
        if(v.size()==0) return 0;
        for(int i = 0; i < v.size(); i++)
            mv= min(mv,v[i]);
        return mv;
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends
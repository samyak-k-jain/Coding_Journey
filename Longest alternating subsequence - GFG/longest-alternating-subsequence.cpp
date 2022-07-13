// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	
		int AlternatingaMaxLength(vector<int>&a)
		{
		    int n = a.size();
             int ma = 1;
            int mi = 1;
            for(int j = 1; j < n; j++)
            {
                if(a[j]>a[j-1])
                    ma = mi+1;
                else if(a[j]<a[j-1])
                    mi = ma+1;
            }
            int ans = max(ma,mi);
            return ans;
        
            
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.AlternatingaMaxLength(nums);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
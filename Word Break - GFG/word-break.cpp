// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
    public:
        
    
    int wordBreak(string A, vector<string> &B) 
    {
        unordered_set<string> mp;
        
        mp.clear();
        
        for(int i = 0; i < B.size(); i++)
        {
            mp.insert(B[i]);
        }
        
        int n = A.size();
        
        vector<int>dp(n+1,0);
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                string temp = A.substr(j,i-j+1);
                
                if(mp.find(temp)!=mp.end())
                {
                    if(j>0)
                    {
                      dp[i]+=dp[j-1];
                    }
                    else
                    {
                       dp[i]+=1;
                    }
                }
               
            }
        }
        
        return dp[n-1]>0;  
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends
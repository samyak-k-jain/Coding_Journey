// { Driver Code Starts
//Initial Template for C

#include <stdio.h> 


 // } Driver Code Ends
//User function Template for C

int searchInSorted(int arr[], int n, int k) 
{ 
    int l = 0;
    int h = n-1;
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if(arr[mid] == k)
            return 1;
        else if(arr[mid] > k)
        {
            h = mid -1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
       
}

// { Driver Code Starts.


int main(void) 
{ 
    
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d%d", &n, &k);
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        
        printf("%d\n", searchInSorted(arr, n, k));

    }

	return 0; 
} 
  // } Driver Code Ends
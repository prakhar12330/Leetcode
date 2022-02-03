// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    
	    int rst=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n-2;i++)
	    {
	        int lo=i+1;
	        int hi=n-1;
	        while(lo<hi)
	        {
	            int total=arr[i]+arr[lo]+arr[hi];
	            if(total<sum)
	            {
	                rst+=(hi-lo);
	                lo++;
	            }
	            else
	            {
	                hi--;
	            }
	        }
	    }
	    return rst;
	    
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int nums[], int n , int target )
{
      vector<int> rst(2,-1);//2 is the size of the vector and -1 being the value at index 0 and 1 of vector rst//      
    
        int lo=0;
        int hi=n-1;
        while(lo<=hi)
        {
            //finding the left element
            int mid=(lo+hi)/2;
            if(nums[mid]==target)
            {
                rst[0]=mid;

                hi=mid-1;
            }
            else if(nums[mid]>target)
            {
                hi=mid-1;
            }
            else if(nums[mid]<target)
            {
                lo=mid+1;
            }
            
            
        }
        lo=0;
        hi=n-1;
        while(lo<=hi)
        {
            //finding the right element
            int mid=(lo+hi)/2;
            if(nums[mid]==target)
            {
                rst[1]=mid;
                lo=mid+1;
            }
            else if(nums[mid]>target)
            {
                hi=mid-1;
            }
            else if(nums[mid]<target)
            {
                lo=mid+1;
            }
            
            
        }
        return rst;
        
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends
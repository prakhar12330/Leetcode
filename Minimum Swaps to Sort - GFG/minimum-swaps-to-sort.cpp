// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int ans=0;
	    unordered_map<int,int>mp;
	    vector<int>nums1=nums;
	    sort(nums1.begin(),nums1.end());
	    for(int i=0;i<nums1.size();i++)
	    {
	        mp[nums[i]]=i;
	    }
	    /*
	    map-->
	    2----0       2---0
	    8----1   --->4---1
	    5----2       5---2
	    4----3       8---3
	    
	    nums1-->
	    2 4 5 8
	    | | | |
	    0 1 2 3
	      ^
	    nums-->
	    2 4 5 8
	    | | | |
	    0 1 2 3
	      ^
	    */
	    for(int i=0;i<nums.size();i++)
	    {
	        if(nums1[i] != nums[i])
	        {
	            ans++;
	            int init=nums[i];
	            swap(nums[i],nums[mp[nums1[i]]]);
	            
	            mp[init]=mp[nums1[i]];
	            mp[nums1[i]]=i;
	        }
	    }
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
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
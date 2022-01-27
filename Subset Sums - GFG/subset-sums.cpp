// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    void formCombinations(int idx,vector<int> &arr, int N,int sum,vector<int> &rst)
    {
       if(idx>=arr.size())
       {
           rst.push_back(sum);
           return;
       }
       //picking condition
       formCombinations(idx+1,arr,N,sum+arr[idx],rst);
       //non-picking condition
       formCombinations(idx+1,arr,N,sum,rst);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>rst;
        int sum=0;
        formCombinations(0,arr,N,sum,rst);
        sort(rst.begin(),rst.end());
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
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
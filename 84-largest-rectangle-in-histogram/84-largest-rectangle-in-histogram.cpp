class Solution {
public:
    
    
    
    vector<int> findNextSmaller(vector<int>& nums,int n)
    {
       vector<int>result(n);
        stack<int>s;
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && nums[i]<=nums[s.top()])
            {
                s.pop();
            }
            if(!s.empty())
                {
                    result[i]=s.top();
                }
            else
                {
                    result[i]=-1;
                }     
                
            s.push(i);
        }
        return result; 
    }
    vector<int> findPrevSmaller(vector<int>& nums,int n)
    {
       vector<int>result(n);
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && nums[i]<=nums[s.top()])
            {
                s.pop();
            }
            if(!s.empty())
                {
                    result[i]=s.top();
                }
            else
                {
                    result[i]=-1;
                }     
                
            s.push(i);
        }
        return result; 
    }

    int largestRectangleArea(vector<int>& heights) 
    {
       int n=heights.size();
       
        //vector for storing the nextSmaller elements of every elemnt
        vector<int>next(n);
        next=findNextSmaller(heights,n);
        
        vector<int>prev(n);
        prev=findPrevSmaller(heights,n);
        int area=INT_MIN;
        for(int i=0;i<n;i++)
        {
           int l=heights[i];
          
           if(next[i]==-1)
           {
             next[i]=n;   
           }
           int b=next[i]-prev[i]-1;
           int newArea=l*b;
           
           area=max(newArea,area);
        }
        
        return area;
        
    }
};
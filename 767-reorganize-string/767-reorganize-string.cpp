class Solution {
public:
    string reorganizeString(string s)
    {
       string ans="";
       //Step01-->Count the occurence
       unordered_map<char,int> m;
       for(char c:s)
       {
            m[c]++;
       }
        //Step02-->Creating maxHeap
        priority_queue<pair<int,char>>maxHeap;
        
        for(auto itr:m)
        {
            maxHeap.push({itr.second,itr.first});
        }
        //Step03-->Keep on popping 2 elements from the heap and add them to the returning string
        while(maxHeap.size()>1)
        {
            auto [a,b]=maxHeap.top();
            maxHeap.pop();
            auto [c,d]=maxHeap.top();
            maxHeap.pop();
            ans.push_back(b);
            ans.push_back(d);
            a--;
            c--;
            if(a>0)
            {
                maxHeap.push({a,b});
            }
            if(c>0)
            {
                maxHeap.push({c,d});
            }
        
        }
        if(maxHeap.size()==1)
        {
            auto [a,b]=maxHeap.top();
            maxHeap.pop();
            if(a>1)return "";
            ans.push_back(b);
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
      }
    
};
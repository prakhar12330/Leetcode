class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int area,cma;
        area=cma=0;// cma=current max area //
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
           area=(j-i)*min(height[i],height[j]);
            if(area>cma)
            {
                cma=area;
            }
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            
        }
        return cma;
    }
};

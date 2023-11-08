class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t)
    {
        if(sx==fx && sy==fy)
        {
            if(t==1)return false;
        }

        int absX=sx-fx;
        int absY=sy-fy;

        if(absX<0)absX= -absX;
        if(absY<0)absY= -absY;

        int absMax=max(absX,absY);

        if(absMax<=t)
        {
            return true;
        }

        return false;
    }
};
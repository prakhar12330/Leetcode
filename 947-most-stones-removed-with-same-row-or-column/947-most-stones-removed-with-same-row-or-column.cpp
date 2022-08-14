class Solution {

    int find(int x,vector<int>&parent)
    {
        if(x==parent[x])return x;
        return find(parent[x],parent);
    }
public:
    int removeStones(vector<vector<int>>& stones) {
        
        if (stones.empty()) return 0;
        
        int m = stones.size();
        
        vector<int>parent(m, 0);
        for (int i = 0; i < m; i++)
            parent[i] = i;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < i; j++) {
                if (stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1]) {
                    int x = find(i,parent);
                    int y = find(j,parent);
                    if (x != y)
                        parent[y] = x;
                }
            }
        }
        
        int ans = 0;
        for (int i = 0; i < m; i++) {
            if (parent[i] == i)
                ans++;
        }
        
        return m-ans;
    }
};
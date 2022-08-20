class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1)
            return -1;
        if(grid[0][0]==0 && grid.size()==1 && grid[0].size()==1)
            return 1;
        queue<pair<pair<int,int>,int>> q;
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid.size(),false));
        q.push({{0,0},1});
        visited[0][0]=true;
        while(!q.empty())
        {
            
          pair<int,int> p = q.front().first;
            int x= p.first;
            int y = p.second;
            int lengthOfPath=q.front().second;
            q.pop();
            vector<pair<int,int>> traverse = {{0,1}, {1,0}, {0,-1}, {-1,0}, {-1,1}, {1,-1}, {-1,-1}, {1,1}};
            for(pair<int,int> neigbhours : traverse)
            {
                int newx = x+neigbhours.first;
                int newy = y+neigbhours.second;
                if(newx<0 || newx>=grid.size() || newy<0 || newy>=grid[0].size() || grid[newx][newy]==1 || visited[newx][newy]==true)
                    continue;
                visited[newx][newy]=true;
                q.push({{newx,newy},lengthOfPath+1});
                if(newx== grid.size()-1 && newy==grid[0].size()-1)
                    return lengthOfPath+1;
            }
            
        }
        return -1;
    }
};
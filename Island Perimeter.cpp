class Solution {
public:
    int comp(vector<vector<int>>& grid, int r, int c){
        if( r <0 || r >=grid.size() || c<0 || c >=grid[0].size()){
            return 1;
        }else {
            return !grid[r][c];
        }
    }
    int getPM(vector<vector<int>>& grid, int r, int c){
        int res = 0;
        res+=comp(grid,r-1,c);
        res+=comp(grid,r+1,c);
        res+=comp(grid,r,c-1);
        res+=comp(grid,r,c+1);
                return res;
    }
        int islandPerimeter(vector<vector<int>>& grid) {
        int res = 0;
        for(int i = 0 ; i<grid.size();i++){
            for(int j = 0; j<grid[0].size();j++){
                if (grid[i][j])
                    res+= getPM(grid,i,j);
            }
        }
                        return res;
    }
};
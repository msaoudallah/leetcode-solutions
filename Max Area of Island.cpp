class Solution {
public:
        bool valid(int r, int c , int m , int n ){
        return (r>=0 && r<m && c>=0 && c<n );
    }
        int maxArea(vector<vector<int>> &mat,int r,int c){
                if (!valid(r,c,mat.size(),mat[0].size())|| !mat[r][c]|| mat[r][c] == 2) return 0;
        else {
            mat[r][c]= 2;
            return 1+maxArea(mat,r+1,c)+maxArea(mat,r,c+1)+maxArea(mat,r-1,c)+maxArea(mat,r,c-1);
        }
    }
        int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max = -1;
        for(int i = 0 ; i<grid.size();i++){
            for(int j= 0 ; j<grid[0].size();j++){
                int res= maxArea(grid,i,j);
               if (max < res){
                   max = res;
            }
        }
        }
        return max;
                    }
};
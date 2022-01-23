class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int> > result (rowIndex + 1);
        for ( int i = 0 ; i<rowIndex + 1 ; i++) {
            result[i].resize(rowIndex + 1);
        }
                result[0][0] = 1;
        for ( int i = 1 ; i<rowIndex + 1 ; i++){
            result[i][0] = 1;
            for(int j = 1 ; j< i + 1 ; j++ ) {
             result[i][j] = result[i-1][j] + result[i-1][j-1];   
            }
        }
        return result[rowIndex];
    }
};
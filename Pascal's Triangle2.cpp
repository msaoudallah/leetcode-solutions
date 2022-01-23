class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > result;
        if (numRows == 0) {
            return result;
        }
        for ( int i = 0 ;i<numRows ; i++) {
            vector<int> x;
            for ( int j = 0 ;j<numRows ; j++) {
                x.push_back(0);
            }
            result.push_back(x);
        }
                result[0][0] = 1;
        for ( int i = 1 ;i<numRows ; i++) {
            result[i][0] = 1;
            for ( int j = 1 ;j<numRows ; j++) {
                result[i][j] = result[i-1][j] + result[i-1][j-1];
            }
                                }
                for ( int i = 0 ;i<numRows ; i++) {
            result[i].resize(i+1);
        }
                        return result;
                    } 
            };
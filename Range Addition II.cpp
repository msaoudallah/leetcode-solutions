class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()== 0 ) return m*n;
        int minI=m+1;
        int minJ=n+1;
        minI  = ops[0][0];
        minJ  = ops[0][1];
        for(int i = 1 ; i<ops.size();i++){
                if (ops[i][0] <minI)
                    minI = ops[i][0];
                if (ops[i][1] <minJ)
                    minJ = ops[i][1];        
        }
               cout<<minI<<":"<<minJ;
        return minI* minJ;
    }
};
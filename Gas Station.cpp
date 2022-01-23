class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int end = 0;
        vector<bool> visited(gas.size(),false);
        visited[0] = true;
        int tank = 0;
        while (true){
                        if (tank<0){
                if(start ==0){
                    start = gas.size()-1;
                }else{
                    start--;
                }
                                if (visited[start])
                    break;
                tank+=  gas[start];
                tank-= cost[start];
            }else {
                                tank+=  gas[end];
                tank-= cost[end];
                if (end ==gas.size()-1){
                    end = 0;
                }else{
                    end++;
                }
                if (visited[end])
                    break;
                            }
                                }
        return tank >=0 ?start:-1; 
                    }
};
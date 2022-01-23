class Solution {
public:
    vector<bool> getBinary(int n){
         vector<bool> r;
    while(n!=0) {r.push_back(n%2==0 ?0:1); n/=2;}
    return r;
    }
    int findComplement(int num) {
        vector<bool> binStr = getBinary(num);
        for(int i = 0 ; i<binStr.size();i++){
            binStr[i] = !binStr[i];
        }
        int res = 0;
        for(int i = 0 ; i<binStr.size();i++){
            res+= (int)binStr[i] * pow(2,i);
        }
                return res;
                    }
};
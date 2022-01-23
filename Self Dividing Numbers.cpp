class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for ( int i = left ; i<=right;i++){
            int num = i;
            bool self = true;
            while(num){
                //cout<<num<<" ";
                if (num%10 != 0 && i%(num%10) ==0){
                    num/=10;
                    cout<<i<<":"<<num<<endl;
                }else{
                    //cout<<endl;
                    self = false;
                    break;
                }
                           }
             if(self)
                res.push_back(i);
                    }
        return res;
    }
};
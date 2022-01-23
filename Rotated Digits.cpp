class Solution {
public:
    int good(int i){
        bool f = false;
        while(i){
                        int d = i%10;
            if ( d== 3 || d==4 || d== 7){
                        return 0;
                            }
            if (d== 2 || d==5 || d== 6 || d==9) 
                f = true;
            i/=10;
        }
        if(f)
        return 1;
                return 0;
    }
        int rotatedDigits(int N) {
        int res = 0;
                for(int i= 2 ; i<=N;i++){
            res+=good(i);
        }
                return res;
    }
};
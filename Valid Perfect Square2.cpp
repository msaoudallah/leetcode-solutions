class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
                for ( int i = 1 ; i<=num/2; i++){
            if (i*i == num) return true;
                    }
        return false;
                    }
};
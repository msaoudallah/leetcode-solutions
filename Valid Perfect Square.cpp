class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int low = 1;
        long long int high = num;
                while (low <= high) {
            long long int mid = (low + high) /2 ;
            //cout<<"H:"<<high<<" "<<" L:"<<low<<" M:"<<mid<<endl;            
            if ( (mid * mid)  > num) high = mid -1;
            else if ((mid * mid)  < num) low = mid +1;
            else return true;
                }
        return false;
                    }
};
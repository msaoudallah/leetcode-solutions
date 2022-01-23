class Solution {
public:
    int thirdMax(vector<int>& nums) {
                int first , second , third, res ;
        int min = INT_MIN;
            int index = 0;
            first = nums[0];
            for ( int i = 0 ; i< nums.size() ; i++ ) {
                if (nums[i] > first){
                    first = nums[i];
                    index = i;
                }
            }
            //nums.erase(nums.begin()+index);
            nums.erase( std::remove( nums.begin(), nums.end(), first ), nums.end() );  
            if (nums.size() < 2) { return first;}
            index = 0;
            second = nums[0];
            for ( int i = 0 ; i< nums.size() ; i++ ) {
                if (nums[i] > second){
                    second = nums[i];
                    index = i;
                }
            } 
            nums.erase( std::remove( nums.begin(), nums.end(), second ), nums.end() );  
            index = 0;
            third = nums[0];
            for ( int i = 0 ; i< nums.size() ; i++ ) {
                if (nums[i] > third){
                    third = nums[i];
                    index = i;
                }
            } 
            nums.erase( std::remove( nums.begin(), nums.end(), third ), nums.end() );  
                                          if (first == second || first == third || second == third || ( first == second && second == third)) return 
            first;
        else return third;
            }
};
class Solution {
public:
    int thirdMax(vector<int>& nums) {
                int first , second , third, res ;
        first = nums[0];
        for ( int i = 0 ; i< nums.size() ; i++ ) {
            if (nums[i] > first){
                first = nums[i];
            }
        }
        //nums.erase(nums.begin()+index);
        nums.erase( std::remove( nums.begin(), nums.end(), first ), nums.end() );  
        if (nums.size() < 2) { return first;}
        second = nums[0];
        for ( int i = 0 ; i< nums.size() ; i++ ) {
            if (nums[i] > second){
                second = nums[i];
            }
        } 
        nums.erase( std::remove( nums.begin(), nums.end(), second ), nums.end() );  
        if (nums.size() < 1) { return first;}
        third = nums[0];
        for ( int i = 0 ; i< nums.size() ; i++ ) {
            if (nums[i] > third){
                third = nums[i];
            }
        } 
        nums.erase( std::remove( nums.begin(), nums.end(), third ), nums.end() );  
        return third;
            }
};
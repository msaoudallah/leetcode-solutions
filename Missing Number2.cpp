class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if (nums.size()== 0){
                    return 0;
        }
        int max = *max_element(nums.begin(), nums.end());
                vector<int> range (max+1);
        for (int i = 0 ; i<nums.size() ; i++) {
            range[nums[i]]++;
        }
        for (int i = 0 ; i<nums.size() ; i++) {
            if (range[i]== 0 ) {
                return i;
            }
        }
                return max+1;
    }
};
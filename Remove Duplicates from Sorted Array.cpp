class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        return (unique(nums.begin(),nums.end())- nums.begin());
    }
};
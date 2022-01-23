class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int res = 0;
        int n = nums.size()/2;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<2*n;i+=2){
            res+=nums[i];
        }
        return res;
    }
    };
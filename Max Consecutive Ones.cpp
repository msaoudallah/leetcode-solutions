class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
                int max = 0 ; 
        int temp = 0 ;
        for(int i = 0 ; i<nums.size();i++) {
            if (nums[i] == 1) {
                temp++;
                if (temp>max) max = temp;
            }
            else {
                temp = 0;
            }
            //cout<<temp<<" "<<max<<endl;
        }
        return max;
            }
};
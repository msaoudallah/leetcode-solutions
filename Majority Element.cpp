class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m1;
        for ( int i = 0 ;i<nums.size() ; i++ ){
            m1[nums[i]]++;
        }
                int max = -1;
        int maxVal = 0;
        for (auto it = m1.begin()  ; it != m1.end() ; ++it) {
            if (it -> second  > max) {
                max = it->second;
                maxVal = it->first;
            }
        }
                return maxVal;
            }
};
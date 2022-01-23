class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
                   map<int,int> m1;
        for ( int i = 0 ;i<nums.size() ; i++ ){
            m1[nums[i]]++;
        }
                int max = -1;
        vector<int> maxVal;
        for (auto it = m1.begin()  ; it != m1.end() ; ++it) {
            if (it -> second  > max && it -> second > (nums.size() / 3)) {
                                maxVal.push_back(it->first);
            }
        }
                return maxVal;
            }
            };
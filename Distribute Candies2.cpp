class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> s1(candies.begin(),candies.end());
                int len = s1.size();
        int cnt = candies.size();
        return len >= cnt/2 ? cnt/2 : len;
                            }
};
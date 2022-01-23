class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        map<int,int> m1;
        for(int i = 0 ; i<candies.size();i++){
            m1[candies[i]]++;
        }
        int len = m1.size();
        int cnt = candies.size();
                        return len >= cnt/2 ? cnt/2 : len;
                            }
};
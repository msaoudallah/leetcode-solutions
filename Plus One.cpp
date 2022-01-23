class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
                if (digits.size() <= 0 ) {
            res.push_back(1);
            return res;
        }
                int ind = digits.size()-1;
        digits[ind]++;
        while (ind != -1 && digits[ind] == 10 ) {
            digits[ind] = 0;
            if (ind == 0) {
                digits.insert(digits.begin(),1);
            }else {
            digits[ind-1]++;
            }
            ind--;
            cout<<ind<<" ";
        }
        return digits;
            }
};
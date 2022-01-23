class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> res (nums.size());
        for (int i = 0 ; i< nums.size() ; i++) {
            res[nums[i]-1]++;
        }
        for( int i= 0 ,j = 0 ;i< res.size() ; i++,j++){
            //cout<<res[i]<<" "<<i<<" "<<j<<endl; 
            if (res[i] != 0) {
                res.erase(res.begin()+i); 
                i--;
            }else {
                res[i] = j+1;
            }
        }
        return res;
    }
};
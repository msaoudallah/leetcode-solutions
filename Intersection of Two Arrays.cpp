class Solution {
public:
    vector<int> intersection(vector<int>& first, vector<int>& second) {
                vector<int> v(first.size());                      
        vector<int>::iterator it;
        sort (first.begin(),first.end());     
        sort (second.begin(),second.end());   
        it=set_intersection (first.begin(), first.end(), second.begin(), second.end(), v.begin());                
                                     v.resize(it-v.begin());
        for(int i = 1 ; i<v.size();i++){
            if (v[i] == v[i-1]) {
                v.erase(v.begin()+i);
                i--;
            }
        }
        return v;
    }
};
class Solution {
public:
    vector<int> intersect(vector<int>& first, vector<int>& second) {
                vector<int> v(first.size());                      
        vector<int>::iterator it;
        sort (first.begin(),first.end());     
        sort (second.begin(),second.end());   
        it=set_intersection (first.begin(), first.end(), second.begin(), second.end(), v.begin());                
                                     v.resize(it-v.begin());
        return v;
    }
};
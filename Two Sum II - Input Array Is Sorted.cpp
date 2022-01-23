class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> x;
        multiset<int> ms;
        std::multiset<int>::iterator it;
        std::multiset<int>::iterator res;
        for (int i = 0 ; i<numbers.size(); i++) {
            ms.insert(numbers[i]);
        }
        for (it = ms.begin() ; it!= ms.end() ;++it) {
            //cout<<
            res =ms.find(target - *it); 
            if (res!= ms.end() && (distance(ms.begin(),it) +1) != (distance( ms.begin(),res)+1 )) {
                x.push_back(std::distance(ms.begin(),it) +1);
                x.push_back(std::distance( ms.begin(),res)+1);
                //cout<<x[0]<<" "<<x[1];
                sort(x.begin() , x.end());
                return x;
                            }
                    }
       return x; 
    }
};
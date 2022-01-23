class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
                unordered_map<int,int> s1;
        pair <std::unordered_map<int,int>::iterator,bool> ret;
        int index1,index2;
        std::unordered_map<int,int>::iterator it2;
        std::unordered_map<int,int>::iterator it;
                for ( int i = 0 ; i< nums.size() ; i++) {
            ret = s1.insert({nums[i],i});
            if (ret.second == false){
                //for (it = s1.begin() ; it!= s1.end() ; ++it) {cout<<*it->second <<" ";}
                index2 = i;
                it2 = s1.find(nums[i]);
                index1 = it2->second;
                cout<<endl<< index1 << " " << index2;
                if (index2 - index1 <= k ) {
                    return true;
                }else{it2->second = i; }
            }
        }
        return false;
    }
};
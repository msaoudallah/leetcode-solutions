class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>m1;
        for(int i = 0 ; i<t.size();i++){
            if (i<s.length()){
                m1[s[i]]++;
            }
            m1[t[i]]--;
                    }
                map<char,int>:: iterator it;
        for(it = m1.begin();it!= m1.end();it++){
            cout<<it->first<<":"<<it->second<<endl;
            if (it->second==-1)
                return it->first;
        }
    }
};
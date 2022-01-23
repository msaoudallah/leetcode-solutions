class Solution {
public:
    int getGCD(int a, int b){
        if ( a == 0 )
            return b;
        return getGCD(b%a,a);
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int> m1;
        for(int i = 0 ; i<deck.size(); i++){
            m1[deck[i]]++;
        }
                map<int, int>::iterator it;
        int res=0;
                for ( it = m1.begin(); it !=m1.end(); it++ )
        {cout<< res<<" ";
            res = getGCD(it->second,res);}
                return res > 1;
    }
};
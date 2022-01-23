class Solution {
public:
    bool judgeCircle(string moves) {
        map<char,pair<int,int>> dir;
        dir['R'] = std::make_pair (1,0);
        dir['U'] = std::make_pair (0,1);
        dir['L'] = std::make_pair (-1,0);
        dir['D'] = std::make_pair (0,-1);
                pair<int,int> pos = make_pair (0,0);
        std::map<char,pair<int,int>>::iterator it;
        for (int i = 0 ; i<moves.length();i++) {
            it = dir.find(moves[i]);
            pos.first += it->second.first;
            pos.second += it->second.second;
        }
                if(!pos.first && ! pos.second)
            return true;
        else 
            return false;
                            }
};
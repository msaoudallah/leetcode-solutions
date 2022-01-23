class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        bool space = false;
        for(int i = s.length()-1; i>=0;i--){
            if (s[i] == ' '){
                space = true;
            }
            else if(s[i]!=' '){
                cout<<s[i]<<":"<<cnt<<" ";
                cnt++;
            }
            if (space == true && cnt == 0){
                space = false;
            }
            if (space == true && cnt > 0)
                return cnt;
        }
        return cnt;
    }
};
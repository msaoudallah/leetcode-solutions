class Solution {
public:
    bool detectCapitalUse(string word) {
    int Capcnt = 0;
    int Lcnt = 0;
    for(int i= 0 ; i<word.length();i++){
        if (islower(word[i])) Lcnt++;
        else Capcnt++;
    }
            if (Capcnt== word.length())
        return true;
    else if (Lcnt== word.length())
        return true;
    else if (Lcnt== word.length()-1&&isupper(word[0]))
        return true;
    else 
        return false;
            }
};
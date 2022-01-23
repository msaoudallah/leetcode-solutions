class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> a(26,0);
        for(int i = 0; i<max(ransomNote.length(), magazine.length()); i++) {
                        if ( i <ransomNote.length())
            a[ransomNote[i]-'a']++;
            if ( i <magazine.length())
            a[magazine[i]-'a']--;
                                }
        for(int i = 0; i<26; i++) {
                        if (a[i] > 0)
                return false;
                    }
        return true;
            }
};
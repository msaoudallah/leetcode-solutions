class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for(int i = 0 ; i<s.length();i++){
            if (isalnum(s[i])){
                t+= tolower(s[i]);
            }
        }
        cout<<t<<" "<<t.length();
        if (t.length() % 2 ==1){
        int mid = floor(t.length() /2) ;
            int l = mid-1;
            int r = mid+1;
            while(l>=0&& r <=t.length()){
                if (t[l]!= t[r])
                    return false;
                l--;
                r++;
            }
            return true;
        }
        else {
            for(int i = 0; i<t.length()/2 ; i++){
                if (t[i] != t[t.length()-i-1])
                    return false;
            }
            return true;
        }
    }
};
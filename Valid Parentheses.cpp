class Solution {
public:
    bool isValid(string s) {
        std::stack<char> x;
        x.push(s[0]);
        for ( int i = 1 ;i<s.length();i++) {
                        if ((s[i] ==')' &&(!x.empty()&& x.top()=='(')) || (s[i] ==']'&& (!x.empty()&&x.top()=='[')) || (s[i] 
                =='}'&& (!x.empty()&&x.top()=='{'))){
                x.pop();
                        }else {
                x.push(s[i]);
            }
        }
        if(x.empty()) return true;
        else return false;
                    }
};
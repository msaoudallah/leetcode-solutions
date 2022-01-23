class Solution {
public:
    string getS(int n)
    {
        int index = 12;
        string s = "1221121221221121122";
        while(s.length() <= n)
        {
            char t = s[s.length()-1];
            s += (t == '1'?'2':'1');
            if(s[index]=='2')
            {
                s += (t == '1'?'2':'1');
            }
            index++;
        }
        return s;
    } 
    int magicalString(int n) {
        string sol = getS(n);
        cout<<sol<<endl;
        int count = 0;
        for(int i = 0 ; i<n;i++){
            if (sol[i]=='1')
                count ++;
        }
        return count;
    }
};
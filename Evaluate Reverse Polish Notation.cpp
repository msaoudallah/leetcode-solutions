class Solution {
public:
    void printS(stack<string> s){
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
    int evalRPN(vector<string>& tokens) {
        stack<string> numbers;
                       for(int i = 0; i<tokens.size();i++){
             //printS(numbers);
            if (tokens[i]!= "+"&& tokens[i]!= "-"&& tokens[i]!= "/"&& tokens[i]!= "*"){
                numbers.push(tokens[i]);
            }
            else {
                //cout<<tokens[i]<<":";
                //
                string lop = numbers.top();
                numbers.pop();
                string rop = numbers.top();
                numbers.pop();
                string op = tokens[i];
                                    if(op == "+")
                    {
                        int res = stoi(lop) + stoi(rop);
                        string r = to_string(res);
                        //cout<<"res is "<<r<<endl;
                        numbers.push(r);
                    }else if (op == "-")
                    {
                        int res = stoi(rop) - stoi(lop);
                        string r = to_string(res);
                        // cout<<"res is "<<r<<endl;
                        numbers.push(r);
                    }else if (op == "/"){
                                            int res = stoi(rop) / stoi(lop);
                        string r = to_string(res);
                        // cout<<"res is "<<r<<endl;
                        numbers.push(r);
                }else if (op == "*"){
                                             int res = stoi(lop) * stoi(rop);
                        string r = to_string(res);
                         //cout<<"res is "<<r<<endl;
                        numbers.push(r);
                }
                           }
        }
        string x = numbers.top();
        return stoi(x);
    }
};
class Solution {
public:
    string NumberToString ( int Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }
    void print(queue<char> q){
                while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }    
    }
        string countAndSay(int n) {
        queue<char> q1;
        queue<char> q2;
                q1.push('1');
        for(int i = 0 ; i<n-1;i++){
                        int cnt = 0;
            char t= q1.front();
            //cout<<"t:"<<t;
            while(!q1.empty()){
            if (q1.front() == t){
                    cnt++;
                    q1.pop();
                    //cout<<cnt<<":"<<t<<endl;
                }else {
                    //push string(cnt) + t
                string p = NumberToString(cnt)+t;
                    for(int i = 0;i<p.length();i++){
                       q2.push(p[i]);  
                    }    
                t = q1.front();
                cnt=0;
                }
                            }
            string p = NumberToString(cnt)+t;
            for(int i = 0;i<p.length();i++){
                       q2.push(p[i]);  
            } 
            cnt = 0;
            swap(q1,q2);
                    }
        string res="";
        while(!q1.empty()){
            res+=q1.front();
            q1.pop();
        }
        return res;
            }
};
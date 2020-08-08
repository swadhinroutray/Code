#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
  
    public:
        stack<int> s1, s2;   
        void push(int x) {
                s1.push(x);     
        }

        void pop() {
              
            while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }      
        int x = s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        }

        int front() {
            while(!s1.empty()){
                // cout<<"TOP:"<<s1.top()<<endl;
                s2.push(s1.top());
                s1.pop();
            }

            // cout<<"Front"<<s2.top()<<endl;
            // if(s1.size()==0)
            return s2.top();

            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            
        }
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        cout<<endl;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}